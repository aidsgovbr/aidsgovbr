<?php
/**
 * @file
 * html.vars.php
 *
 * @see html.tpl.php
 */

/**
 * Implements hook_preprocess_html().
 */
function govbr_theme_preprocess_html(&$variables) {
  // Cookie highcontrast.
  if (isset($_COOKIE['govbr_highcontrast']) && $_COOKIE['govbr_highcontrast']) {
    $variables['classes_array'][] = 'highcontrast';
  }

  // Add 'barra.js'.
  drupal_add_js('//barra.brasil.gov.br/barra.js', array('type' => 'external', 'scope' => 'footer', 'defer' => TRUE, 'async' => TRUE));
}
