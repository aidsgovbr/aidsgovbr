<?php
/**
 * @file
 * Administrative interface for youtube_import.
 */

/**
 * Implements hook_form().
 */
function youtube_import_form($form, &$form_state) {
  /*
   * Declare the default values to meet coding standards
   * these will be filled by the extract function.
   */
  $apikey = $drupal_user = $username = $playlistid = $frequency = $contenttype = $lastrun = '';
  $mapping = array();

  // A flag to see if there is a youtube field.
  $has_youtube_field = FALSE;

  // Get the settings array and extract it locally.
  extract(youtube_import_get());

  // Create the field for the API key.
  $form['apikey'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('YouTube API key.'),
    '#default_value' => $apikey,
  );

  // Create the field for the username.
  $form['username'] = array(
    '#type' => 'textfield',
    '#title' => t('YouTube user name or your channel ID'),
    '#description' => t('This value is only used to get the playlist id. If you know the playlist id, you may leave this blank but be sure to fill in one or the other'),
    '#default_value' => $username,
  );

  // Create the field for the playlist id.
  $form['playlistid'] = array(
    '#type' => 'textfield',
    '#title' => t('YouTube play list ID.'),
    '#description' => t('You may leave this blank if you have entered the YouTube username and it will be automatically updated to the "uploads" playlist of that user.'),
    '#default_value' => $playlistid,
  );

  // Create the fequency setting.
  $form['frequency'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Cron Frequency'),
    '#description' => t('Enter 0 to disable the cron job. Enter the time in seconds to have it run during cron.'),
    '#default_value' => $frequency,
  );

  // Create the content type drop down.
  $form['contenttype'] = array(
    '#type' => 'select',
    '#required' => TRUE,
    '#title' => t('Content Type'),
    '#options' => node_type_get_names(),
    '#default_value' => $contenttype,
    '#description' => t('Select the content type that videos should import to'),
  );

  // Get the usernames from the Drupal database.
  $user_data = db_query("SELECT uid,name FROM {users} WHERE status=1");
  $users = array('', '');
  foreach ($user_data as $user_data) {
    $users[$user_data->uid] = $user_data->name;
  }

  // Author selection drop down.
  $form['drupal_user'] = array(
    '#type' => 'select',
    '#title' => t('Author'),
    '#options' => $users,
    '#default_value' => $drupal_user,
    '#required' => FALSE,
    '#description' => t('YouTube import will default to the current user or the user selected here.'),
  );

  /*
   * If there is no playlistid or apikey, then this has to be new or broken
   * don't give run options to users that aren't ready.
   */
  if ($apikey && $playlistid) {

    // Create the run link html.
    $markup = l(t('Click here to run the import now.'), 'admin/content/youtube-import/run-now');

    // If there is a lastrun date, lets display it.
    if ($lastrun) {
      $markup .= ' (Last run: ' . format_date((int) $lastrun, 'long') . ')';
    }

    // Add the link to the form.
    $form['youtube_import_run_link'] = array(
      '#markup'  => "<p>{$markup}</p>",
    );
  }

  /*
   * The form has 2 submit buttons because the mapping area
   * could get long and tedious to scroll through
   * this is the first one.
   */
  $form['submittop'] = array(
    '#type' => 'submit',
    '#value' => t('Save Configuration Settings'),
  );

  // If there is no content type, then we can't select fields.
  if (!empty($contenttype)) {

    /*
     * Just a heading to let the user know this is the
     * mapping section.
     */
    $form['mapheading'] = array(
      '#type' => 'markup',
      '#markup' => '<h2>' . t('Field Mapping') . '</h2>',
    );

    // Retrieve the fields for the content type.
    $fieldinfo = field_info_instances('node', $contenttype);

    /*
     * Initialize an array for the field names and labels
     * as well as add the ones that do not show up.
     */
    $fields = array('title' => t('Title'), 'created' => 'Created');

    /*
     * Loop through the fields and add them to our
     * more useful array.
     */
    foreach ($fieldinfo as $key => $value) {
      // Need to mark youtube fields as they are always included.
      if ($value['widget']['type'] == 'youtube') {
        $fields[$key] = $value['label'] . '*';
        $has_youtube_field = TRUE;
      }
      else {
        $fields[$key] = $value['label'];
      }
    }

    /*
     * Get the properties that we can pull
     * from YouTube.
     */
    $properties = array(
      '' => t('None'),
      'title' => t('Title'),
      'description' => t('Description'),
      'publishedAt' => t('Published Date'),
      'thumbnails' => t('Thumbnail Image'),
      'id' => t('Video ID'),
      'url' => t('Share URL'),
      'duration' => t('Duration'),
      'dimension' => t('Dimension'),
      'definition' => t('Definition'),
      'viewCount' => t('Number of Views'),
      'likeCount' => t('Number of Likes'),
      'dislikeCount' => t('Number of dislikes'),
      'favoriteCount' => t('Number of Favorites'),
      'commentCount' => t('Number of comments'),
    );

    // Create our indefinite field element.
    $form['mapping'] = array(
      '#tree' => TRUE,
    );

    /*
     * Loop through each of the fields in the
     * content type and create a mapping drop down
     * for each.
     */
    foreach ($fields as $fieldname => $label) {

      // YouTube fields are added automatically.
      if (strpos($label, '*') !== FALSE) {
        $form['mapping'][$fieldname] = array(
          '#type' => 'select',
          '#title' => T("@l <smal>@f</small>", array('@f' => $fieldname, '@l' => $label)),
          '#options' => $properties,
          '#value' => 'url',
          '#disabled' => TRUE,
        );
      }
      else {
        // Create the mapping dropdown.
        $form["mapping"][$fieldname] = array(
          '#type' => 'select',
          '#title' => t("@l <small>@f</small>", array('@f' => $fieldname, '@l' => $label)),
          '#options' => $properties,
          '#default_value' => isset($mapping[$fieldname]) ? $mapping[$fieldname] : NULL,
        );
      }
    }

    // If there is a youtube field, need to explain *.
    if ($has_youtube_field) {
      $form['youtube_markup'] = array(
        '#type' => 'markup',
        '#markup' => '<p>' . t('YouTube fields are automatically added to the mapping.') . '</p>',
      );
    }

    // Create the submit button at the bottom of the form.
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save Configuration Settings'),
    );

  }

  return $form;
}

/**
 * Implements hook_form_validate().
 */
function youtube_import_form_validate($form, &$form_state) {

  /*
   * The only validation we need is to make
   * sure we have a username or playlist id.
   */
  if (empty($form_state['values']['username']) && empty($form_state['values']['playlistid'])) {
    form_set_error('playlistid', t('The username and playlist id cannot both be blank.'));
    form_set_error('username', t('The username and playlist id cannot both be blank.'));
  }

}

/**
 * Implements hook_form_submit().
 */
function youtube_import_form_submit($form, &$form_state) {
  // Get the previous settings.
  $settings = youtube_import_get();

  // Get the youtube settings list (non mapping stuff).
  $setting_keys = array(
    'username',
    'drupal_user',
    'apikey',
    'playlistid',
    'lastrun',
    'frequency',
    'contenttype',
  );

  // Loop through the form values and see which matches we can find.
  foreach ($setting_keys as $key) {

    // Set the value or clear it depending on user submission.
    if (array_key_exists($key, $form_state['values'])) {
      $settings[$key] = $form_state['values'][$key];
    }
    else {
      $settings[$key] = '';
    }
  }

  // Loop through the user updated mapping fields.
  if (array_key_exists('mapping', $form_state['values'])) {
    foreach ($form_state['values']['mapping'] as $key => $value) {
      // Set the mapping value.
      $settings['mapping'][$key] = $value;
    }
  }

  // If the username was set and the playlist wasn't, let's get the default.
  if (empty($settings['playlistid'])) {
    $settings['playlistid'] = youtube_import_playlist_id($settings['username'], $settings['apikey']);
  }

  // Determine the level of success.
  if (!empty($settings['playlistid'])) {
    // Inform the user.
    drupal_set_message(t('YouTube Import settings saved successfully.'));
  }
  else {
    drupal_set_message(t('Unable to set the play list ID.'), 'error');
  }

  // Save our settings.
  youtube_import_set($settings);
}
