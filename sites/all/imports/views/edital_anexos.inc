<?php 
$view = new view();
$view->name = 'edital_anexos';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Edital anexos';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Edital anexos';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Edital anexo */
$handler->display->display_options['fields']['field_edital_anexo']['id'] = 'field_edital_anexo';
$handler->display->display_options['fields']['field_edital_anexo']['table'] = 'field_data_field_edital_anexo';
$handler->display->display_options['fields']['field_edital_anexo']['field'] = 'field_edital_anexo';
$handler->display->display_options['fields']['field_edital_anexo']['label'] = '';
$handler->display->display_options['fields']['field_edital_anexo']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_edital_anexo']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_edital_anexo']['delta_offset'] = '0';
/* Campo: Conteúdo: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_plain';
/* Campo: Conteúdo: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Editar edital anexos';
/* Contextual filter: Conteúdo: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Conteúdo: Tipo */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'edital_anexo' => 'edital_anexo',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'edital-anexos';

/* Display: EVA Field */
$handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Conteúdo: Edital relacionado (field_edital_relacionado) */
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['id'] = 'field_edital_relacionado_nid';
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['table'] = 'field_data_field_edital_relacionado';
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['field'] = 'field_edital_relacionado_nid';
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['required'] = TRUE;
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['delta'] = '-1';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Conteúdo: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_edital_relacionado_nid';
$handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['entity_type'] = 'node';
$handler->display->display_options['bundles'] = array(
  0 => 'edital',
);
$handler->display->display_options['show_title'] = 1;

/* Display: Edital anexos */
$handler = $view->new_display('entity_view', 'Edital anexos', 'entity_view_2');
$handler->display->display_options['display_description'] = 'Lista das anexos do edital';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_edital_anexo' => 'field_edital_anexo',
  'body' => 'body',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_edital_anexo' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'body' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 0,
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Conteúdo: Edital relacionado (field_edital_relacionado) */
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['id'] = 'field_edital_relacionado_nid';
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['table'] = 'field_data_field_edital_relacionado';
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['field'] = 'field_edital_relacionado_nid';
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['required'] = TRUE;
$handler->display->display_options['relationships']['field_edital_relacionado_nid']['delta'] = '-1';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Conteúdo: Edital relacionado (field_edital_relacionado) */
$handler->display->display_options['arguments']['field_edital_relacionado_nid']['id'] = 'field_edital_relacionado_nid';
$handler->display->display_options['arguments']['field_edital_relacionado_nid']['table'] = 'field_data_field_edital_relacionado';
$handler->display->display_options['arguments']['field_edital_relacionado_nid']['field'] = 'field_edital_relacionado_nid';
$handler->display->display_options['arguments']['field_edital_relacionado_nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_edital_relacionado_nid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['field_edital_relacionado_nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_edital_relacionado_nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_edital_relacionado_nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_edital_relacionado_nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['entity_type'] = 'node';
$handler->display->display_options['bundles'] = array(
  0 => 'edital',
);
$handler->display->display_options['show_title'] = 1;
$translatables['edital_anexos'] = array(
  t('Master'),
  t('Edital anexos'),
  t('more'),
  t('Apply'),
  t('Reiniciar'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Editar edital anexos'),
  t('Tudo'),
  t('Page'),
  t('EVA Field'),
  t('field_edital_relacionado'),
  t('Lista das anexos do edital'),
);
