# PDF To Image #

The PDF To Image module provides automatic conversion of
uploaded PDF files to images.
It can be used either to create a snapshot of the front page,
or to generate a gallery of images from each page in the document.

The module provides a new widget for managing PDF file uploads.
It places generated images into a nominated Image field on the same content 
type.

## Requirements ##

  * File field, Image field and (optionally) Imagemagick module.
  
  * ImageMagick toolkit (convert)  to be available on server and in your PATH
    via command-line interface.
    You *can* use [ImageMagick module](http://drupal.org/project/imagemagick) .

  * Ghostscript (gs) installed on the server also.

If the Drupal imagemagick.module is not available, the process will still run,
using the version of 'convert' that is available on your server.
However imagemagick.module is recommended for win32 installations and it has
better diagnostics available.

## Installation ##

You must have the imagemagick tools available on your server, and able to
be called from the commandline.
Running

    which convert

on your server should tell you if and where the binary exists.

Run

    convert -version

to check that pdf support is available as one to the formats in the
'Delegates' list.

Once the module is enabled, check your site status at /admin/reports/status
You should see a message that will tell you if your system is ready to run.
"Imagemagick support for PDF to Image"
If not, you need to check the requirements and the ImageMagick settings
at admin/config/media/image-toolkit.
See the ImageMagick project docs for troubleshooting further.

If ImageMagick appears to be available but still does not convert PDFs, it
could be it wasn't installed with 'Ghostscript' libraries or other required
dependencies. You'll have to go to the ImageMagick forums for help with that.
It may be as easy as "apt-get install ghostscript" or similar, so try that.

## Configuration ##

### Quickstart ###

A 'feature' has been provided that will ato-configure a demonstration content 
type with some default settings applied.

- Download and enabled 'features' module.
- Enable 'PDF document'

You should now be able to "Add content » Document" and try out the function.
To work this into your own site structure, see below.

### Manual configuration ###

- First, add an image field on your chosen content type. This is where the
  generated images will be stored.
- Set the allowed fields to 1 if you just want a cover page, direct number to
  store only some count of pages or 'unlimited' if you want all pages
  to be generated.
- Next add a filefield to your chosen content type and choose
  'PDF to Image' as the widget.
  This filefield should be configured to only accept PDF file types.
- When configuring this field, you will be required to link the uploaded file
  field with the target image field.
- You can add image style handling to the image field rendering as normal to
  adjust the size of the results and how they display on the page.

- Remember to confirm that ImageMagick is working for you!

## Usage ##

With the above configs set up right, you can now

* Create a piece of content
* if you upload a pdf and leave the image field blank, images will be generated
  for it.
* If you upload a PDF *and* an image of your choosing, that will be left alone.
* If you delete the image(s), an image of the PDF will be regenerated.

## Troubleshooting ##

If nothing special seems to happen when saving a node, check the status report
and ensure the Imagemagick "convert" binary, and Ghostscript "gs" is available.

If it seems to start a batch job but fails, check the logs for more detail on
the command that was run and see what failed.

## Processing ##

Processing of PDF may take some time.

Larger documents use the 'batch' process to generate each page.

## Field paths and tokens ##

This module SHOULD be compatable with
[filefield_paths](http://drupal.org/project/filefield_paths)
which allows you to customize the file folders and file names of the uploaded
and generated images. A custom token

    [node:p2i-source-filename]

is available to allow you to name the derived images after the source PDF 
if you wish.

## Dev notes ##

The only candidate function from ImageAPI which may perform PDF to image
convertion is _imageapi_imagemagick_convert(). Unfortunately, it can't pass
arguments to 'convert' tool of ImageMagick *before* source file specification,
which is needed to change default density of 100x100dpi.
On this reason, a custom functionis included in the module's source:

    function pdf_to_image_generate_page($params, $page_number = 0) {
      . . .
    }

[Triggering from code](https://www.drupal.org/node/2327213)
The actual conversion process happens in a Drupal batch task. Thus, you must
be calling it in a way that allows batch processing (such as a form submission)
If calling entity_save() programatically (like via cron) you may need to
manually trigger batch_process() as well.


## Troubleshooting Imagemagick install ##

Imagemagick does come with a stand-alone binary installer for desktop systems.
You should try using that first.

OSX (mavericks) with homebrew

    sudo brew install imagemagick

... seemed to work but failed with the message:

    dyld: Library not loaded: /usr/local/lib/libltdl.7.dylib
    Referenced from: /usr/local/bin/convert

The fix described here worked
  https://fmt.ewi.utwente.nl/redmine/projects/jtorx/wiki/Additional_dependency_for_Mac_OS_X_108_(Mountain_Lion)_for_the_anidot_automaton_visualization

    sudo brew uninstall libtool
    sudo brew install libtool --universal

(Requires XCode)
