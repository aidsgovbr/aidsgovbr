<?php
/**
 * @file
 * page.vars.php
 */

/**
 * Implements hook_preprocess_page().
 *
 * @see page.tpl.php
 */
function govbr_theme_preprocess_page(&$variables){
  // Search box.
  if (module_exists('search')) {
    $search_form = drupal_get_form('search_form');
    $search_box = drupal_render($search_form);
    $variables['search_box'] = $search_box;
  }

  // Get theme settings values.
  $variables['info_designation'] = theme_get_setting('govbr_theme_info_designation');
  $variables['info_name'] = theme_get_setting('govbr_theme_info_name');
  $variables['info_subordination'] = theme_get_setting('govbr_theme_info_subordination');

  // Set color scheme.
  _govbr_theme_set_color_scheme(theme_get_setting('govbr_theme_color_scheme'));

  // Get social links.
  $variables['social_links'] = _govbr_theme_social_links();

  // Get shortcuts links.
  $variables['accessibility_shortcuts'] = _govbr_theme_accessibility_shortcuts();

  // Get accessibility page path.
  if(theme_get_setting('govbr_theme_accessibility_page')) {
    $variables['accessibility_page'] = l(t('Accessibility'), theme_get_setting('govbr_theme_accessibility_page'));
  }

  // Get sitemap page path.
  if(theme_get_setting('govbr_theme_accessibility_sitemap')) {
    $variables['accessibility_sitemap'] = l(t('Sitemap'), theme_get_setting('govbr_theme_accessibility_sitemap'));
  }
}

/**
 * Function to add the style of the selected color scheme.
 */
function _govbr_theme_set_color_scheme($color_scheme) {
  $scheme_path = drupal_get_path('theme', 'govbr_theme') . '/css/color_scheme/' . $color_scheme . '/styles.css';

  drupal_add_css($scheme_path, 'theme');
}

/**
 * Return formated social links.
 */
function _govbr_theme_social_links() {
  $networks = _govbr_theme_get_social_networks();

  foreach ($networks as $network_key => $network_value) {
    $social_link = theme_get_setting('govbr_theme_social_' . $network_key);

    if (!empty($social_link)) {
      $items[] = array(
        'data' => l('<i class="fa ' . $network_value['class'] . ' fa-fw"></i>', $social_link, array('attributes' => array('target' => '_blank'), 'html' => TRUE)),
        'class' => array('leaf'),
      );
    }
  }

  if (isset($items)) {
    return theme('item_list', array('items' => $items, 'attributes' => array('class' => 'menu list-inline')));
  }
}

/**
 * Return formated accessibility shortcuts links.
 */
function _govbr_theme_accessibility_shortcuts() {
  $shortcuts = theme_get_setting('govbr_theme_accessibility_shortcuts');

  $fragments = array(
    'content' => 'main-content',
    'menu' => 'sidebar-first-menu',
    'search' => 'edit-keys',
    'footer' => 'footer',
  );

  $i = 1;
  foreach ($shortcuts as $shortcut) {
    if ($shortcut !== 0) {
      $items[] = array(
        'data' => l(t('Go to ' . $shortcut) . ' <span>'. $i .'</span>', current_path(), array('html' => TRUE, 'fragment' => $fragments[$shortcut], 'attributes' => array('accesskey' => $i))),
        'id' => 'link-' . $shortcut,
      );

      $i++;
    }
  }

  if (isset($items)) {
    return theme('item_list', array('items' => $items, 'attributes' => array('class' => 'shortcuts')));
  }
}
