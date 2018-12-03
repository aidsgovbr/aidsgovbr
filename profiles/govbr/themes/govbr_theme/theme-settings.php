<?php
/**
 * @file
 * theme-settings.php
 *
 * Provides theme settings for Bootstrap based themes when admin theme is not.
 *
 * @see theme/settings.inc
 */

/**
 * Include helpers functions.
 */
bootstrap_include('govbr_theme', 'theme/helpers.inc');

/**
 * Implements hook_form_FORM_ID_alter().
 */
function govbr_theme_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {
  // Work-around for a core bug affecting admin themes.
  // @see https://drupal.org/node/943212
  if (isset($form_id)) {
    return;
  }
  // Include theme settings file.
  bootstrap_include('govbr_theme', 'theme/settings.inc');
  // Alter theme settings form.
  _govbr_theme_settings_form($form, $form_state);
}
