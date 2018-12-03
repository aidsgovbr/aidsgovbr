<?php
/**
 * @file
 * block.vars.php
 */

/**
 * Implements hook_preprocess_block().
 */
function govbr_theme_preprocess_block(&$variables) {
  // Add Class 'block-no-title' on title-less blocks.
  if (!$variables['block']->subject) {
    $variables['classes_array'][] = 'block-no-title';
  }
}
