<?php 
$view = new view();
$view->name = 'gestores_menu';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'menu_links';
$view->human_name = 'gestores menu';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'menu_name',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['row_plugin'] = 'fields';
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['menu_name']['id'] = 'menu_name';
$handler->display->display_options['fields']['menu_name']['table'] = 'menu_links';
$handler->display->display_options['fields']['menu_name']['field'] = 'menu_name';
$handler->display->display_options['fields']['menu_name']['label'] = '';
$handler->display->display_options['fields']['menu_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['menu_name']['element_label_colon'] = FALSE;
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['link_title']['id'] = 'link_title';
$handler->display->display_options['fields']['link_title']['table'] = 'menu_links';
$handler->display->display_options['fields']['link_title']['field'] = 'link_title';
$handler->display->display_options['fields']['link_title']['label'] = '';
$handler->display->display_options['fields']['link_title']['element_label_colon'] = FALSE;
/* Contextual filter: Broken/missing handler */
$handler->display->display_options['arguments']['plid']['id'] = 'plid';
$handler->display->display_options['arguments']['plid']['table'] = 'menu_links';
$handler->display->display_options['arguments']['plid']['field'] = 'plid';
$handler->display->display_options['arguments']['plid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['plid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['plid']['summary']['format'] = 'default_summary';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'menu/%';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['menu_name']['id'] = 'menu_name';
$handler->display->display_options['fields']['menu_name']['table'] = 'menu_links';
$handler->display->display_options['fields']['menu_name']['field'] = 'menu_name';
$handler->display->display_options['fields']['menu_name']['label'] = '';
$handler->display->display_options['fields']['menu_name']['exclude'] = TRUE;
$handler->display->display_options['fields']['menu_name']['element_label_colon'] = FALSE;
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['link_title']['id'] = 'link_title';
$handler->display->display_options['fields']['link_title']['table'] = 'menu_links';
$handler->display->display_options['fields']['link_title']['field'] = 'link_title';
$handler->display->display_options['fields']['link_title']['label'] = '';
$handler->display->display_options['fields']['link_title']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Broken/missing handler */
$handler->display->display_options['arguments']['plid']['id'] = 'plid';
$handler->display->display_options['arguments']['plid']['table'] = 'menu_links';
$handler->display->display_options['arguments']['plid']['field'] = 'plid';
$handler->display->display_options['arguments']['plid']['default_action'] = 'default';
$handler->display->display_options['arguments']['plid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['plid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['plid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['plid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['plid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['path'] = 'menu/%';
$translatables['gestores_menu'] = array(
  t('Master'),
  t('more'),
  t('Apply'),
  t('Reiniciar'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Tudo'),
  t('Page'),
);
