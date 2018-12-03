Views filebrowser (views_filebrowser)
============
This module provides an filebrowser on file and image fields. The filebrowser
shows all managed files in Drupal.

Requirements
------------
This module requires the following modules:

* [Chaos tool suite (>=1.9)](https://www.drupal.org/project/ctools)
* File
* [file_entity](https://www.drupal.org/project/file_entity)
* [Views](https://drupal.org/project/views)

Installation Instructions
-------------------------

1. Download and install the following modules, if these modules are not
installed on your Drupal Website:
	* Views
	* File Entity
2. Place this module directory in your modules folder (this will usually be
   "sites/all/modules/").
3. Enable the Views filebrowser module. This will install all required modules.
4. Add or configure an existing file or image field. To configure a typical node
   field, visit Admin -> Structure -> Content types and click "manage fields"
   on a type you'd like to modify. Add a new file field or edit an existing one.

   While editing the file or image field, you'll have new option available with
   the title "Enable Views Filebrowser". Enable this setting and save the field.
5. The Views Filebrowser is ready to be used.


Submodules
----------

### Views filebrowser CKEditor (views_filebrowser_ckeditor)

This submodule provides an image filebrowser in the CKEditor WYSIWYG text
editor.

#### Requirements

This module requires the following modules:

* [CKEditor](https://www.drupal.org/project/ckeditor)
* Views Filebrowser


#### Installation Instructions

1. Download and install the following modules, if these modules are not
installed on your Drupal Website:
  * Views
  * Views Bulk Operations
  * Administration Views
  * File Entity
2. Extract the folder in the module folder: *sites/all/modules*.
3. Enable the CKEditor File Browser module at the Modules list, at
admin/modules. This will install all required modules.
4. Check if the installation was successful by navigating to
*admin/reports/status* in your Drupal installation.
5. Enable the CKEditor File Browser module at your CKEditor Profiles by
navigating to *admin/config/content/ckeditor* and choosing your profile.
Below *Editor Appearance* > *Plugins*, check *Plugin for the filebrowser* and
save your settings.
