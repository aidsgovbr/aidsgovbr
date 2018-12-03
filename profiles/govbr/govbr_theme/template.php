<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_theme().
 *
 * Register theme hook implementations.
 *
 * @see _bootstrap_theme()
 */
function govbr_theme_theme(&$existing, $type, $theme, $path) {
  return _bootstrap_theme($existing, $type, $theme, $path);
}

/**
 * Declare various hook_*_alter() hooks.
 *
 * hook_*_alter() implementations must live (via include) inside this file so
 * they are properly detected when drupal_alter() is invoked.
 */
bootstrap_include('bootstrap', 'theme/alter.inc');

/**
 * Include helpers functions.
 */
bootstrap_include('govbr_theme', 'theme/helpers.inc');


/**
* hide title nodes type noticia
*/

function govbr_preprocess_page(&$variables) {
  if (!empty($variables['node']) && $variables['node']->type == 'noticia') {
    $variables['show_title'] = FALSE;
  }
}

function govbr_form_alter(&$form, &$form_state, $form_id) {
  if (isset($form_id) && $form_id === 'views_exposed_form')
  {
    $form['submit']['#value'] = t($form['submit']['#value']);
    $form['reset']['#value'] = t($form['reset']['#value']);
  }
}
