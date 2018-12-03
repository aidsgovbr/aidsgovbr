<?php 
$view = new view();
$view->name = 'location_directory';
$view->description = 'Location directory filtered by arguments in the url.';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view location directory';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = '';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'street' => 'street',
  'city' => 'city',
  'province' => 'province',
  'postal_code' => 'postal_code',
  'country' => 'country',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'street' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'city' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'province' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'postal_code' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'country' => array(
    'sortable' => 1,
    'separator' => '',
  ),
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Campo: Location: Street */
$handler->display->display_options['fields']['street']['id'] = 'street';
$handler->display->display_options['fields']['street']['table'] = 'location';
$handler->display->display_options['fields']['street']['field'] = 'street';
/* Campo: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
/* Campo: Location: Province */
$handler->display->display_options['fields']['province']['id'] = 'province';
$handler->display->display_options['fields']['province']['table'] = 'location';
$handler->display->display_options['fields']['province']['field'] = 'province';
/* Campo: Location: Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'location';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
/* Campo: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
/* Contextual filter: Location: Country */
$handler->display->display_options['arguments']['country']['id'] = 'country';
$handler->display->display_options['arguments']['country']['table'] = 'location';
$handler->display->display_options['arguments']['country']['field'] = 'country';
$handler->display->display_options['arguments']['country']['default_action'] = 'summary';
$handler->display->display_options['arguments']['country']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['country']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['country']['title'] = '%1';
$handler->display->display_options['arguments']['country']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['country']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['country']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['country']['specify_validation'] = TRUE;
/* Contextual filter: Location: Province */
$handler->display->display_options['arguments']['province']['id'] = 'province';
$handler->display->display_options['arguments']['province']['table'] = 'location';
$handler->display->display_options['arguments']['province']['field'] = 'province';
$handler->display->display_options['arguments']['province']['default_action'] = 'summary';
$handler->display->display_options['arguments']['province']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['province']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['province']['title'] = '%2';
$handler->display->display_options['arguments']['province']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['province']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['province']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['province']['specify_validation'] = TRUE;
/* Contextual filter: Location: City */
$handler->display->display_options['arguments']['city']['id'] = 'city';
$handler->display->display_options['arguments']['city']['table'] = 'location';
$handler->display->display_options['arguments']['city']['field'] = 'city';
$handler->display->display_options['arguments']['city']['default_action'] = 'summary';
$handler->display->display_options['arguments']['city']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['city']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['city']['title'] = '%3';
$handler->display->display_options['arguments']['city']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['city']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['city']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['city']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['city']['glossary'] = TRUE;
$handler->display->display_options['arguments']['city']['limit'] = '1';
/* Filter criterion: Conteúdo: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = '0';
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
/* Filter criterion: Location: Lid */
$handler->display->display_options['filters']['lid']['id'] = 'lid';
$handler->display->display_options['filters']['lid']['table'] = 'location';
$handler->display->display_options['filters']['lid']['field'] = 'lid';
$handler->display->display_options['filters']['lid']['operator'] = 'not empty';
$handler->display->display_options['filters']['lid']['group'] = '0';
$handler->display->display_options['filters']['lid']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Locations';
$handler->display->display_options['path'] = 'location/directory';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Locations';
$handler->display->display_options['menu']['weight'] = '0';
$translatables['location_directory'] = array(
  t('Defaults'),
  t('more'),
  t('Apply'),
  t('Reiniciar'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Título'),
  t('Street'),
  t('City'),
  t('Province'),
  t('Postal Code'),
  t('Country'),
  t('All'),
  t('%1'),
  t('%2'),
  t('%3'),
  t('Page'),
  t('Locations'),
);
