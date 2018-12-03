<?php
/**
 * @file
 * Defines the administration settings form and other adminstrative functions
 * for pullquote.
 */

/**
 * Form generation function for global pullquote configuration.
 */
function pullquote_admin_settings_form() {
  $form = array();

  $form['title'] = array(
    '#markup' => t('These settings allow you to choose how pullquote will function on your site.'),
  );

  $form['pullquote_scope'] = array(
    '#type' => 'radios',
    '#title' => t('Choose how pullquote JavaScript and CSS are added to the site'),
    '#options' => array(
      0 => 'Content Only',
      1 => 'Global',
    ),
    '#default_value' => variable_get('pullquote_scope', PULLQUOTE_SCOPE_DEFAULT),
    '#required' => TRUE,
    '#description' => t('"Global" will load the pullquote CSS and JS on every page. "Content Only" will load the CSS and JS only on nodes. You can choose specific nodes or allow the code to be loaded on every node.'),
  );

  $form['content_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Content Settings'),
  );

  $form['content_settings']['pullquote_content_by_type'] = array(
    '#type' => 'radios',
    '#title' => t('Select how pullquote will load content based on node types:'),
    '#options' => array(
      0 => 'All',
      1 => 'By Type',
    ),
    '#default_value' => variable_get('pullquote_content_by_type', PULLQUOTE_CONTENT_BY_TYPE_DEFAULT),
    '#required' => TRUE,
    '#description' => t('Choose if pullquote can be added for all content (all nodes) or specify by content type.'),
    '#states' => array(
      'visible' => array(
        ':input[name="pullquote_scope"]' => array('value' => 0),
      ),
    ),
  );

  $form['content_settings']['pullquote_content_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content Types'),
    '#options' => node_type_get_names(),
    '#default_value' => variable_get('pullquote_content_types', array()),
    '#required' => FALSE,
    '#description' => t('Choose which content types will load pullquote code and render pullquotes. For better performance you should only load pullquote where you need it.'),
    '#states' => array(
      'visible' => array(
        ':input[name="pullquote_content_by_type"]' => array('value' => 1),
        ':input[name="pullquote_scope"]' => array('value' => 0),
      ),
    ),
  );

  $form['view_mode_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('View Mode Settings'),
  );

  $form['view_mode_settings']['pullquote_load_by_view_mode'] = array(
   '#type' => 'radios',
   '#title' => t('Load by View Mode'),
   '#options' => array(0 => t('Load on all view modes'), 1 => t('Load on specific view modes')),
   '#default_value' => variable_get('pullquote_load_by_view_mode', 1),
   '#required' => TRUE,
   '#description' => t('Load Pullquote by view mode? You can choose to enable pullquote only on certain view modes. This is helpful if you want to show pullquotes on the full node but not on teasers.'),
    '#states' => array(
      'visible' => array(
        ':input[name="pullquote_scope"]' => array('value' => 0),
      ),
    ),
  );

  // Load the list of avialable view modes.
  $entity_info = entity_get_info('node');
  $view_modes = $entity_info['view modes'];
  $view_mode_options = array();

  foreach ($view_modes as $mode => $settings) {
    $view_mode_options[$mode] = $settings['label'];
  }

  $form['view_mode_settings']['pullquote_view_modes'] = array(
   '#type' => 'checkboxes',
   '#title' => t('View Modes'),
   '#options' => $view_mode_options,
   '#default_value' => variable_get('pullquote_view_modes', array('full')),
   '#description' => t('Choose which view modes will load pullquote code and render pullquotes. For better performance you should only load pullquote where you need it.'),
    '#states' => array(
      'visible' => array(
        ':input[name="pullquote_load_by_view_mode"]' => array('value' => 1),
        ':input[name="pullquote_scope"]' => array('value' => 0),
      ),
    ),
  );

  return system_settings_form($form);
}

/**
 * Form function for pullquote style configuration.
 */
function pullquote_admin_styles_form() {
  $ctools_enabled = module_exists('ctools');
  $path = drupal_get_path('module', 'pullquote');
  $css_files = array();
  $files = file_scan_directory($path . '/css', '/.css$/');

  foreach ($files as $file) {
    $css_files[$file->filename] = str_replace('_', ' ', $file->name);
  }
  natsort($css_files);
  $form = array();

  $form['title'] = array(
    '#markup' => t('These settings allow you to change the look of pullquotes on your site. This is handled by using different style sheets. You can choose from default styles or use your own.'),
  );

  $form['pullquote_example'] = array(
    '#type' => 'markup',
    '#prefix' => '<span class="pullquote-processed pullquote-quote">',
    '#suffix' => '<br /><span class="attribution">Thomas Jefferson</span></span>',
    '#markup' => '<span class="pullquote-content">If we can but prevent the government from wasting the labours of the people, under the pretence of taking care of them, they must become happy.</span>',
  );

  // We only allow file upload as an option if Ctools is available because it
  // has CSS filtering tools.
  $source_options = array();
  if ($ctools_enabled) {
    $source_options = array(
      'selection' => 'Pullquote module supplied styles',
      'path' => 'User supplied path to a stylesheet',
      'upload' => 'User uploaded stylesheet',
    );
  }
  else {
    $source_options = array(
      'selection' => 'Pullquote module supplied styles',
      'path' => 'User supplied path to a stylesheet',
    );

  }
  $form['pullquote_css_source'] = array(
    '#type' => 'radios',
    '#title' => t('CSS Source'),
    '#options' => $source_options,
    '#default_value' => variable_get('pullquote_css_source', 'selection'),
    '#required' => TRUE,
    '#description' => t('Choose the source of your pullquote stylesheet'),
  );

  $form['pullquote_css_selection'] = array(
    '#type' => 'select',
    '#title' => t('Pullquote Style'),
    '#options' => $css_files,
    '#default_value' => variable_get('pullquote_css_selection', PULLQUOTE_DEFAULT_CSS),
    '#required' => TRUE,
    '#description' => t('Choose from one of the provided style sheets.'),
    '#states' => array(
      'visible' => array(
        ':input[name="pullquote_css_source"]' => array('value' => 'selection'),
      ),
    ),
  );

  $form['pullquote_css_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to custom Pullquote style sheet'),
    '#description' => t('The path to the file you would like to use for you pullquote css. We recommend putting your custom CSS in a libraries directory called pullquote: i.e. "sites/all/libraries/pullquote/mypullquote.css"'),
    '#default_value' => variable_get('pullquote_css_source', '') == 'path' ? variable_get('pullquote_css', '') : '',
    '#states' => array(
      'visible' => array(
        ':input[name="pullquote_css_source"]' => array('value' => 'path'),
      ),
    ),
  );

  if ($ctools_enabled) {
    $description = t("If you don't have direct file access to the server, use this field to upload your style sheet.");
    if (variable_get('pullquote_css_source', '') == 'upload') {
      $description .= '<br /><strong>'
        . t('The currently used CSS file is:')
        . ' '
        . variable_get('pullquote_css', '')
        . '</strong>';
    }

    $form['pullquote_css_upload'] = array(
      '#type' => 'file',
      '#title' => t('Upload css file'),
      '#maxlength' => 40,
      '#description' => $description,
      '#states' => array(
        'visible' => array(
          ':input[name="pullquote_css_source"]' => array('value' => 'upload'),
        ),
      ),
    );
  }

  $attached_settings = array(
    'pullquoteCurrent' => file_create_url(variable_get('pullquote_css', $path . '/css/' . PULLQUOTE_DEFAULT_CSS)),
    'pullQuoteModulePath' => '/' . $path . '/css/',
  );

  $form['#attached']['js'] = array(
    drupal_get_path('module', 'pullquote') . '/js/pullquote.admin.js',
    array(
      'data' => $attached_settings,
      'type' => 'setting',
    ),
  );

  $form = system_settings_form($form);
  // We don't want to call system_settings_form_submit(), so change #submit.
  array_pop($form['#submit']);
  $form['#submit'][] = 'pullquote_admin_styles_form_submit';
  $form['#validate'][] = 'pullquote_admin_styles_form_validate';
  return $form;
}

/**
 * Form validation handler for the form generated by pullquote_admin_styles_form.
 * @see pullquote_admin_styles_form()
 */
function pullquote_admin_styles_form_validate($form, &$form_state) {
  // Handle file uploads.
  $validators = array('file_validate_extensions' => array('css'));

  // Check for a new uploaded style sheet.
  $file = file_save_upload('pullquote_css_upload', $validators);
  if (isset($file)) {
    // File upload was attempted.
    if ($file) {
      // Put the temporary file in form_values so we can save it on submit.
      $form_state['values']['pullquote_css_upload'] = $file;
    }
    else {
      // File upload failed.
      form_set_error('pullquote_css_upload', t('The css file could not be uploaded.'));
    }
  }

  if ($form_state['values']['pullquote_css_source'] == 'upload' && !$file) {
    form_set_error('pullquote_css_upload', t('You must choose a CSS file to upload.'));
  }

  if ($form_state['values']['pullquote_css_source'] == 'path' && empty($form_state['values']['pullquote_css_path'])) {
    form_set_error('pullquote_css_path', t('A valid CSS file path is required.'));
  }

  // If the user provided a path for a css file, make sure it exists at that
  // path.
  if ($form_state['values']['pullquote_css_path']) {
    $path = _pullquote_settings_validate_path($form_state['values']['pullquote_css_path']);
    if (!$path) {
      form_set_error('pullquote_css_path', t('The custom css path is invalid.'));
    }
  }
}

/**
 * Form submission handler for the form generated by pullquote_admin_styles_form.
 * @see pullquote_admin_styles_form()
 */
function pullquote_admin_styles_form_submit($form, &$form_state) {
  // If the user uploaded a style sheet, save it to a permanent location.
  $source = $form_state['values']['pullquote_css_source'];

  if ($source == 'selection') {
    $path = drupal_get_path('module', 'pullquote');
    $pullquote_css = $path . '/css/' . $form_state['values']['pullquote_css_selection'];
  }
  elseif ($source == 'path') {
    $pullquote_css = $form_state['values']['pullquote_css_path'];
  }
  elseif ($source == 'upload') {
    if ($file = $form_state['values']['pullquote_css_upload']) {
      unset($form_state['values']['pullquote_css_upload']);
      $css_contents = file_get_contents($file->uri);
      if (module_exists('ctools')) {
        ctools_include('css');
        $css_contents = ctools_css_filter($css_contents);
      }
      $filename = file_save_data($css_contents, file_default_scheme() . '://' . $file->filename);
      // Get rid of the temporary file.
      file_delete($file);
      $pullquote_css = $filename->uri;
    }
  }
  else {
    //set a default.
    $pullquote_css = $path . '/css/pullquote_style_1.css';
  }

  variable_set('pullquote_css', $pullquote_css);
  variable_set('pullquote_css_selection', $form_state['values']['pullquote_css_selection']);
  variable_set('pullquote_css_path', $form_state['values']['pullquote_css_path']);
  variable_set('pullquote_css_source', $form_state['values']['pullquote_css_source']);
  drupal_set_message(t('The configuration options have been saved.'));
}

/**
 * Helper function for the to validate paths.
 *
 * @see _system_theme_settings_validate_path()
 * as this was copied directly from there.
 *
 * Attempts to validate normal system paths, paths relative to the public files
 * directory, or stream wrapper URIs. If the given path is any of the above,
 * returns a valid path or URI that the theme system can display.
 *
 * @param $path
 *   A path relative to the Drupal root or to the public files directory, or
 *   a stream wrapper URI.
 * @return mixed
 *   A valid path that can be displayed through the theme system, or FALSE if
 *   the path could not be validated.
 */
function _pullquote_settings_validate_path($path) {
  // Absolute local file paths are invalid.
  if (drupal_realpath($path) == $path) {
    return FALSE;
  }
  // A path relative to the Drupal root or a fully qualified URI is valid.
  if (is_file($path)) {
    return $path;
  }
  // Prepend 'public://' for relative file paths within public filesystem.
  if (file_uri_scheme($path) === FALSE) {
    $path = 'public://' . $path;
  }
  if (is_file($path)) {
    return $path;
  }
  return FALSE;
}
