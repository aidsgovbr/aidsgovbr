<?php
/**
 * @file
 * menu-tree.func.php
 */

/**
 * Bootstrap theme wrapper function for the secondary menu links.
 */
function govbr_theme_menu_tree__secondary(&$variables) {
  return '<ul class="menu secondary">' . $variables['tree'] . '</ul>';
}
