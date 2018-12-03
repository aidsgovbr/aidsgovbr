<?php 
$view = new view();
$view->name = 'editais';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Editais';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Editais e licitações';
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_situacao_do_edital' => 'field_situacao_do_edital',
  'field_edital_data_limite' => 'field_edital_data_limite',
  'field_edital_tipo' => 'field_edital_tipo',
);
$handler->display->display_options['style_options']['default'] = 'field_edital_data_limite';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_situacao_do_edital' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_edital_data_limite' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_edital_tipo' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['summary'] = 'Editais e licitações';
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 'striped',
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<strong>Não tem editais ou licitações no momento</strong>';
$handler->display->display_options['empty']['area']['format'] = 'html';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<p>[title] </p>';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Campo: Conteúdo: Típo de edital */
$handler->display->display_options['fields']['field_edital_tipo']['id'] = 'field_edital_tipo';
$handler->display->display_options['fields']['field_edital_tipo']['table'] = 'field_data_field_edital_tipo';
$handler->display->display_options['fields']['field_edital_tipo']['field'] = 'field_edital_tipo';
$handler->display->display_options['fields']['field_edital_tipo']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_edital_tipo']['type'] = 'i18n_taxonomy_term_reference_link';
/* Campo: Conteúdo: Situação do edital */
$handler->display->display_options['fields']['field_situacao_do_edital']['id'] = 'field_situacao_do_edital';
$handler->display->display_options['fields']['field_situacao_do_edital']['table'] = 'field_data_field_situacao_do_edital';
$handler->display->display_options['fields']['field_situacao_do_edital']['field'] = 'field_situacao_do_edital';
$handler->display->display_options['fields']['field_situacao_do_edital']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_situacao_do_edital']['alter']['text'] = '<div class="[field_situacao_do_edital] ">[field_situacao_do_edital] </div>';
$handler->display->display_options['fields']['field_situacao_do_edital']['click_sort_column'] = 'tid';
$handler->display->display_options['fields']['field_situacao_do_edital']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_situacao_do_edital']['group_column'] = 'tid';
/* Campo: Conteúdo: Data limite */
$handler->display->display_options['fields']['field_edital_data_limite']['id'] = 'field_edital_data_limite';
$handler->display->display_options['fields']['field_edital_data_limite']['table'] = 'field_data_field_edital_data_limite';
$handler->display->display_options['fields']['field_edital_data_limite']['field'] = 'field_edital_data_limite';
$handler->display->display_options['fields']['field_edital_data_limite']['settings'] = array(
  'format_type' => 'curta_publicacoes',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Sort criterion: Conteúdo: Data limite (field_edital_data_limite) */
$handler->display->display_options['sorts']['field_edital_data_limite_value']['id'] = 'field_edital_data_limite_value';
$handler->display->display_options['sorts']['field_edital_data_limite_value']['table'] = 'field_data_field_edital_data_limite';
$handler->display->display_options['sorts']['field_edital_data_limite_value']['field'] = 'field_edital_data_limite_value';
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
  'edital' => 'edital',
);

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'editais.xml';
$handler->display->display_options['displays'] = array(
  'default' => 'default',
  'page' => 'page',
);
$translatables['editais'] = array(
  t('Master'),
  t('Editais e licitações'),
  t('more'),
  t('Apply'),
  t('Reiniciar'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« início'),
  t('‹ anterior'),
  t('próximo ›'),
  t('fim »'),
  t('<strong>Não tem editais ou licitações no momento</strong>'),
  t('<p>[title] </p>'),
  t('Típo de edital'),
  t('Situação do edital'),
  t('<div class="[field_situacao_do_edital] ">[field_situacao_do_edital] </div>'),
  t('Data limite'),
  t('Feed'),
);
