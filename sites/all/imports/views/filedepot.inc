<?php 
$view = new view();
$view->name = 'filedepot';
$view->description = 'filedepot folder view with attached files';
$view->tag = '';
$view->base_table = 'filedepot_categories';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Folder Listing */
$handler = $view->new_display('default', 'Folder Listing', 'default');
$handler->display->display_options['title'] = 'Document Repository';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['grouping'] = 'pid';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'pid' => 'pid',
  'cid' => 'cid',
  'name' => 'name',
  'view_node' => 'view_node',
);
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'filedepot_categories';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['label'] = '';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['cid']['id'] = 'cid';
$handler->display->display_options['fields']['cid']['table'] = 'filedepot_categories';
$handler->display->display_options['fields']['cid']['field'] = 'cid';
$handler->display->display_options['fields']['cid']['label'] = 'Folder ID';
$handler->display->display_options['fields']['cid']['exclude'] = TRUE;
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'filedepot_categories';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Folder';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = 'filedepot/folder/[cid]';
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'filedepot_categories';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'Node ID';
/* Contextual filter: Broken/missing handler */
$handler->display->display_options['arguments']['cid']['id'] = 'cid';
$handler->display->display_options['arguments']['cid']['table'] = 'filedepot_categories';
$handler->display->display_options['arguments']['cid']['field'] = 'cid';
$handler->display->display_options['arguments']['cid']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['cid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['cid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['cid']['specify_validation'] = TRUE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'filedepot_categories';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['label'] = '';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['cid']['id'] = 'cid';
$handler->display->display_options['fields']['cid']['table'] = 'filedepot_categories';
$handler->display->display_options['fields']['cid']['field'] = 'cid';
$handler->display->display_options['fields']['cid']['label'] = 'Folder ID';
$handler->display->display_options['fields']['cid']['exclude'] = TRUE;
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'filedepot_categories';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['text'] = '[name]';
$handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['name']['alter']['path'] = 'filedepot/folder/[cid]';
$handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'filedepot_categories';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'Node ID';
$handler->display->display_options['path'] = 'filedepotview';

/* Display: Filedepot */
$handler = $view->new_display('block', 'Filedepot', 'block_1');
$handler->display->display_options['block_description'] = 'Filedepot Listing of the viewable folders for user';
$translatables['filedepot'] = array(
  t('Folder Listing'),
  t('Document Repository'),
  t('more'),
  t('Apply'),
  t('Reiniciar'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Folder ID'),
  t('Folder'),
  t('[name]'),
  t('Node ID'),
  t('All'),
  t('Page'),
  t('Filedepot'),
  t('Filedepot Listing of the viewable folders for user'),
);
