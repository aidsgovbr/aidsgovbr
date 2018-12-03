<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'GovBR';
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'govbr';
    }
  }
}

/*
 * Implements hook_install_tasks_alter()
 */
function govbr_install_tasks_alter(&$tasks, $install_state) {
  $tasks['install_finished'] = array(
    'display_name' => st('Finished'),
    'display' => 1,
    'function' => 'govbr_install_finished',
  );
}

function govbr_install_finished(&$install_state) {
  drupal_set_title(st('GovBR installation complete'), PASS_THROUGH);
  $messages = drupal_set_message();
  $output = '<p>' . st('Congratulations, you installed GovBR!') . '</p>';
  $output .= '<p>' . l(st('Visit your new site.'), '<front>') . '</p>';

  // Flush all caches to ensure that any full bootstraps during the installer
  // do not leave stale cached data, and that any content types or other items
  // registered by the install profile are registered correctly.
  drupal_flush_all_caches();

  // Remember the profile which was used.
  variable_set('install_profile', drupal_get_profile());

  // Install profiles are always loaded last
  db_update('system')
    ->fields(array('weight' => 1000))
    ->condition('type', 'module')
    ->condition('name', drupal_get_profile())
    ->execute();

  // block menu-relevancia
  db_update('block')
    ->fields(array(
      'status' => 1,
      'weight' => 1,
      'title' => '<none>',
      'region' => 'sidebar_first',
    ))
    ->condition('delta', 'menu-relevancia')
    ->execute();
  // block menu-assuntos
  db_update('block')
    ->fields(array(
      'status' => 1,
      'weight' => 2,
      'region' => 'sidebar_first',
    ))
    ->condition('delta', 'menu-assuntos')
    ->execute();
  // block menu-assuntos
  db_update('block')
    ->fields(array(
      'status' => 1,
      'weight' => 3,
      'region' => 'sidebar_first',
    ))
    ->condition('delta', 'menu-acesso-informacao')
    ->execute();
  // block menu-assuntos
  db_update('block')
    ->fields(array(
      'status' => 1,
      'weight' => 4,
      'region' => 'sidebar_first',
    ))
    ->condition('delta', 'menu-centrais-conteudos')
    ->execute();
  // block menu-destaque
  // db_update('block')
  //   ->fields(array(
  //     'status' => 1,
  //     'weight' => 0,
  //     'region' => 'header',
  //   ))
  //   ->condition('delta', 'menu-destaque')
  //   ->execute();

  // dummy menu links
  $dummy_menu_links = array(
    'menu-destaque',
    'menu-relevancia',
    'menu-assuntos',
    'menu-acesso-informacao',
    'menu-centrais-conteudos',
  );
  $query = db_insert('menu_links')->fields(array('menu_name', 'link_path', 'link_title', 'module', 'external'));
  foreach ($dummy_menu_links as $dummy_menu_link) {
    $query->values(array(
      $dummy_menu_link,
      'http://drupalgovbr.org',
      'Link',
      'menu',
      '1',
    ));
  }
  $query->execute();

  // Cache a fully-built schema.
  drupal_get_schema(NULL, TRUE);

  // Run cron to populate update status tables (if available) so that users
  // will be warned if they've installed an out of date Drupal version.
  // Will also trigger indexing of profile-supplied content or feeds.
  drupal_cron_run();

  return $output;
}
