<?php
/**
 * @file
 * settings.inc
 */

/**
 * Contains the form for the theme settings.
 *
 * @param array $form
 *   The form array, passed by reference.
 * @param array $form_state
 *   The form state array, passed by reference.
 */
function _govbr_theme_settings_form(&$form, $form_state) {
  // Do not add GovBR specific settings to non-bootstrap based themes.
  $theme = !empty($form_state['build_info']['args'][0]) ? $form_state['build_info']['args'][0] : FALSE;

  // Global settings.
  if ($theme === FALSE) {
    return;
  }
  // Other theme settings.
  elseif ($theme !== 'bootstrap') {

    $base_theme = bootstrap_get_theme_info($theme, 'base theme');
    if (!$base_theme || (!is_array($base_theme) && $base_theme !== 'bootstrap') || (is_array($base_theme) && !in_array('bootstrap', $base_theme))) {
      return;
    }
  }

  // Wrap global setting fieldsets in vertical tabs.
  $form['general'] = array(
    '#type' => 'vertical_tabs',
    '#prefix' => '<h2><small>' . t('Override Global Settings') . '</small></h2>',
    '#weight' => -9,
  );
  $form['theme_settings']['#group'] = 'general';
  $form['logo']['#group'] = 'general';
  $form['favicon']['#group'] = 'general';

  // Do not add Bootstrap specific settings to global settings.
  if (empty($form_state['build_info']['args'][0])) {
    unset($form['general']['#prefix']);
    return;
  }

  $admin_images_path = drupal_get_path('theme', 'govbr_theme') . '/images/admin/';

  // Specific GovBR Settings.
  $form['govbr_theme'] = array(
    '#type' => 'vertical_tabs',
    '#attached' => array(
      'js'  => array(drupal_get_path('theme', 'govbr_theme') . '/js/govbr.admin.js'),
    ),
    '#prefix' => '<h2><small>' . t('GovBR Settings') . '</small></h2>',
    '#weight' => -50,
  );

  // Site information.
  $form['info'] = array(
    '#type' => 'fieldset',
    '#title' => t('Site information'),
    '#group' => 'govbr_theme',
  );
  $form['info']['govbr_theme_info_designation'] = array(
    '#type' => 'textfield',
    '#title' => t('Designation'),
    '#description' => theme('image', array('path' => $admin_images_path . 'info-designation.png')),
    '#default_value' => theme_get_setting('govbr_theme_info_designation'),
    '#required' => TRUE,
    '#weight' => 0,
  );
  $form['info']['govbr_theme_info_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Main name'),
    '#description' => theme('image', array('path' => $admin_images_path . 'info-name.png')),
    '#default_value' => theme_get_setting('govbr_theme_info_name'),
    '#required' => TRUE,
    '#weight' => 2,
  );
  $form['info']['govbr_theme_info_subordination'] = array(
    '#type' => 'textfield',
    '#title' => t('Subordination'),
    '#description' => theme('image', array('path' => $admin_images_path . 'info-subordination.png')),
    '#default_value' => theme_get_setting('govbr_theme_info_subordination'),
    '#required' => TRUE,
    '#weight' => 4,
  );

  // Color scheme
  $form['color_scheme'] = array(
    '#type' => 'fieldset',
    '#title' => t('Color scheme'),
    '#group' => 'govbr_theme',
  );
  $form['color_scheme']['govbr_theme_color_scheme'] = array(
    '#type' => 'radios',
    '#title' => t('Select a color scheme'),
    '#default_value' => theme_get_setting('govbr_theme_color_scheme'),
    '#options' => array(
      'yellow' => t('Yellow') . '<br />' . theme('image', array('path' => $admin_images_path . 'color-scheme-yellow.png')),
      'green' => t('Green') . '<br />' . theme('image', array('path' => $admin_images_path . 'color-scheme-green.png')),
      'blue' => t('Blue') . '<br />' .  theme('image', array('path' => $admin_images_path . 'color-scheme-blue.png')),
      'white' => t('White') . '<br />' . theme('image', array('path' => $admin_images_path . 'color-scheme-white.png')),
    ),
    '#required' => TRUE,
  );

  // Accesibility.
  $form['accessibility'] = array(
    '#type' => 'fieldset',
    '#title' => t('Accessibility'),
    '#group' => 'govbr_theme',
  );
  // Shortcuts.
  $form['accessibility']['govbr_theme_accessibility_shortcuts'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Shortcuts'),
    '#description' => theme('image', array('path' => $admin_images_path . 'accessibility-shortcuts.png')),
    '#default_value' => theme_get_setting('govbr_theme_accessibility_shortcuts'),
    '#options' => array(
      'content' => t('Go to content'),
      'menu' => t('Go to menu'),
      'search' => t('Go to search'),
      'footer' => t('Go to footer'),
    ),
  );
  $form['accessibility']['govbr_theme_accessibility_page'] = array(
    '#type' => 'textfield',
    '#title' => t('Accessibility page path'),
    '#description' => theme('image', array('path' => $admin_images_path . 'accessibility-page.png')),
    '#default_value' => theme_get_setting('govbr_theme_accessibility_page'),
  );
  $form['accessibility']['govbr_theme_accessibility_sitemap'] = array(
    '#type' => 'textfield',
    '#title' => t('Sitemap page path'),
    '#description' => theme('image', array('path' => $admin_images_path . 'accessibility-sitemap.png')),
    '#default_value' => theme_get_setting('govbr_theme_accessibility_sitemap'),
  );

  // Social links.
  $form['social'] = array(
    '#type' => 'fieldset',
    '#title' => t('Social links'),
    '#description' => theme('image', array('path' => $admin_images_path . 'social-links.png')),
    '#group' => 'govbr_theme',
  );

  $networks = _govbr_theme_get_social_networks();
  foreach ($networks as $network_key => $network_value) {
    $form['social']['govbr_theme_social_' . $network_key] = array(
      '#type' => 'textfield',
      '#title' => t($network_value['label']),
      '#default_value' => theme_get_setting('govbr_theme_social_' . $network_key),
    );
  }
}
