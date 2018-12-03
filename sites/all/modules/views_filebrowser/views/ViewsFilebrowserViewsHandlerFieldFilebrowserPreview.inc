<?php

/**
 * @file
 * Definition of views_handler_field_file_rendered.
 */

/**
 * Field handler to render a file with a view mode using file_view_file().
 *
 * @ingroup views_field_handlers
 */
class ViewsFilebrowserViewsHandlerFieldFilebrowserPreview extends views_handler_field_entity {

  /**
   * Render method for views field handler.
   */
  public function render($values) {
    $file = $this->get_value($values);

    if (image_get_info($file->uri)) {
      return theme('image_style', array(
        'style_name' => 'views_slideshow_thumbnail',
        'path' => $file->uri,
      ));
    }

    return theme('views_filebrowser_file_icon', array(
      'file' => $file,
      'icon_directory' => drupal_get_path('module', 'views_filebrowser/filetypes'),
    ));
  }

}
