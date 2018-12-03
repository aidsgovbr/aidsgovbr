<?php
/**
 * @file
 * Views filebrowser default views file.
 */

/**
 * Implements hook_views_data().
 */
function views_filebrowser_views_data() {
  $data = array();

  // Rendered file.
  $data['file_managed']['preview'] = array(
    'title' => t('Preview'),
    'help' => t('Display the preview of an file.'),
    'field' => array(
      'handler' => 'ViewsFilebrowserViewsHandlerFieldFilebrowserPreview',
      'click sortable' => TRUE,
      'real field' => 'fid',
      'additional fields' => array(
        'fid',
      ),
    ),
  );

  return $data;
}
