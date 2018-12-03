<?php
/**
 * @file
 * Editor plugin for Pullquote module.
 */

/**
 * Define a Wysiwyg plugin.
 *
 * Supposed to be used for "Drupal plugins" (cross-editor plugins) only.
 *
 * @see hook_wysiwyg_plugin()
 *
 * @return
 *   Meta information about the buttons provided by this plugin.
 */
function pullquote_pullquote_plugin() {
  $plugins['pullquote'] = array(
    'title' => t('Pullquote'),
    'vendor url' => 'http://drupal.org/project/pullquote',
    'icon path' => drupal_get_path('module', 'pullquote') . '/plugins/wysiwyg',
    'icon file' => 'pullquote.gif',
    'icon title' => t('Insert a pull quote'),
    'js path' => drupal_get_path('module', 'pullquote') . '/plugins/wysiwyg',
    'js file' => 'pullquote.js',
    'css path' => drupal_get_path('module', 'pullquote') . '/plugins/wysiwyg',
    'css file' => 'pullquote.css',
    'settings' => array(
    ),
    'extended_valid_elements' => array(
      'span[class]',
    ),
  );

  return $plugins;
}
