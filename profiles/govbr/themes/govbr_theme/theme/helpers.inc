<?php
/**
 * @file
 * helpers.inc
 *
 * Contains helpers functions.
 */

/**
 * Available social networks.
 *
 * @see page.vars.php
 */
function _govbr_theme_get_social_networks() {
  $networks = array(
    'facebook' => array(
      'label' => 'Facebook',
      'class' => 'fa-facebook-square',
    ),
    'twitter' => array(
      'label' => 'Twitter',
      'class' => 'fa-twitter-square',
    ),
    'gplus' => array(
      'label' => 'Google Plus',
      'class' => 'fa-google-plus-square',
    ),
    'flickr' => array(
      'label' => 'Flickr',
      'class' => 'fa-flickr',
    ),
    'youtube' => array(
      'label' => 'Youtube',
      'class' => 'fa-youtube-square',
    ),
  );

  return $networks;
}
