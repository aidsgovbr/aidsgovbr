<?php 
$view = new view();
$view->name = 'location_table';
$view->description = 'Node location table.';
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
$handler->display->display_options['access']['perm'] = 'view node location table';
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
$handler->display->display_options['path'] = 'location/views';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Location table';
$handler->display->display_options['menu']['weight'] = '0';
$translatables['location_table'] = array(
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
  t('Page'),
);
