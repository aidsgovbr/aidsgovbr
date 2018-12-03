<?php 
$view = new view();
$view->name = 'taxonomy_term';
$view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Taxonomy term';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_pub_thumbnail' => 'field_pub_thumbnail',
  'title' => 'title',
  'field_pub_descricao' => 'field_pub_descricao',
  'timestamp' => 'timestamp',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_pub_thumbnail' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_pub_descricao' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
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
/* Campo: Conteúdo: Thumbnail */
$handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_thumbnail']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Campo: Conteúdo: Publicações */
$handler->display->display_options['fields']['field_publicacoes']['id'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['table'] = 'field_data_field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['field'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['label'] = '';
$handler->display->display_options['fields']['field_publicacoes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publicacoes']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_publicacoes']['type'] = 'i18n_taxonomy_term_reference_link';
$handler->display->display_options['fields']['field_publicacoes']['delta_offset'] = '0';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<p>[title]</p>';
/* Campo: Conteúdo: Descrição */
$handler->display->display_options['fields']['field_pub_descricao']['id'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['table'] = 'field_data_field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['field'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['label'] = '';
$handler->display->display_options['fields']['field_pub_descricao']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_pub_descricao']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_pub_descricao']['settings'] = array(
  'trim_length' => '600',
);
/* Campo: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Última modificação';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Sort criterion: Conteúdo: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
/* Sort criterion: Conteúdo: Data da publicação (field_pub_data_da_publicacao) */
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['id'] = 'field_pub_data_da_publicacao_value';
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['table'] = 'field_data_field_pub_data_da_publicacao';
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['field'] = 'field_pub_data_da_publicacao_value';
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['order'] = 'DESC';
/* Contextual filter: Conteúdo: Has taxonomy term ID depth modifier */
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
/* Filter criterion: Conteúdo: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_pub_thumbnail' => 'field_pub_thumbnail',
  'title' => 'title',
  'field_pub_descricao' => 'field_pub_descricao',
  'timestamp' => 'timestamp',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_pub_thumbnail' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_pub_descricao' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Campo: Thumbnail */
$handler->display->display_options['fields']['field_pub_thumbnail']['id'] = 'field_pub_thumbnail';
$handler->display->display_options['fields']['field_pub_thumbnail']['table'] = 'field_data_field_pub_thumbnail';
$handler->display->display_options['fields']['field_pub_thumbnail']['field'] = 'field_pub_thumbnail';
$handler->display->display_options['fields']['field_pub_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_pub_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_pub_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_pub_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail_publicacao',
  'image_link' => '',
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<h5>[title]</h5>';
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Campo: Conteúdo: Descrição */
$handler->display->display_options['fields']['field_pub_descricao']['id'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['table'] = 'field_data_field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['field'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['label'] = '';
$handler->display->display_options['fields']['field_pub_descricao']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_pub_descricao']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_pub_descricao']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_pub_descricao']['settings'] = array(
  'trim_length' => '600',
);
/* Campo: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Última modificação';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Conteúdo: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
/* Contextual filter: Conteúdo: Has taxonomy term ID depth modifier */
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Conteúdo: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
$handler->display->display_options['path'] = 'taxonomy/term/%';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed');
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 15;
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);

/* Display: Contexto */
$handler = $view->new_display('ctools_context', 'Contexto', 'ctools_context_1');
$handler->display->display_options['style_plugin'] = 'ctools_context';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Thumbnail */
$handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_thumbnail']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Campo: Conteúdo: Publicações */
$handler->display->display_options['fields']['field_publicacoes']['id'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['table'] = 'field_data_field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['field'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['label'] = '';
$handler->display->display_options['fields']['field_publicacoes']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_publicacoes']['type'] = 'i18n_taxonomy_term_reference_link';
$handler->display->display_options['fields']['field_publicacoes']['delta_offset'] = '0';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<p>[title]</p>';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Descrição */
$handler->display->display_options['fields']['field_pub_descricao']['id'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['table'] = 'field_data_field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['field'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['label'] = '';
$handler->display->display_options['fields']['field_pub_descricao']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_pub_descricao']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_pub_descricao']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_pub_descricao']['settings'] = array(
  'trim_length' => '600',
);
/* Campo: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';

/* Display: Boletim Epi EVA Field */
$handler = $view->new_display('entity_view', 'Boletim Epi EVA Field', 'entity_view_1');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['inline'] = array(
  'title' => 'title',
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Thumbnail */
$handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_thumbnail']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Campo: Conteúdo: Publicações */
$handler->display->display_options['fields']['field_publicacoes']['id'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['table'] = 'field_data_field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['field'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['label'] = '';
$handler->display->display_options['fields']['field_publicacoes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publicacoes']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_publicacoes']['type'] = 'i18n_taxonomy_term_reference_link';
$handler->display->display_options['fields']['field_publicacoes']['delta_offset'] = '0';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<p>[title]</p>';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Descrição */
$handler->display->display_options['fields']['field_pub_descricao']['id'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['table'] = 'field_data_field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['field'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['label'] = '';
$handler->display->display_options['fields']['field_pub_descricao']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_pub_descricao']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_pub_descricao']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_pub_descricao']['settings'] = array(
  'trim_length' => '600',
);
/* Campo: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
$handler->display->display_options['entity_type'] = 'node';
$handler->display->display_options['bundles'] = array(
  0 => 'pagina',
);

/* Display: Boletim References */
$handler = $view->new_display('references', 'Boletim References', 'references_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'references_style';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'references_fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Thumbnail */
$handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_thumbnail']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Campo: Conteúdo: Publicações */
$handler->display->display_options['fields']['field_publicacoes']['id'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['table'] = 'field_data_field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['field'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['label'] = '';
$handler->display->display_options['fields']['field_publicacoes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publicacoes']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_publicacoes']['type'] = 'i18n_taxonomy_term_reference_link';
$handler->display->display_options['fields']['field_publicacoes']['delta_offset'] = '0';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<p>[title]</p>';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Descrição */
$handler->display->display_options['fields']['field_pub_descricao']['id'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['table'] = 'field_data_field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['field'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['label'] = '';
$handler->display->display_options['fields']['field_pub_descricao']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_pub_descricao']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_pub_descricao']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_pub_descricao']['settings'] = array(
  'trim_length' => '600',
);
/* Campo: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';

/* Display: Boletim Bloco */
$handler = $view->new_display('block', 'Boletim Bloco', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Veja também';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'semanticviews_fields';
$handler->display->display_options['row_options']['skip_blank'] = 0;
$handler->display->display_options['row_options']['semantic_html'] = array(
  'title' => array(
    'element_type' => 'div',
    'class' => '',
    'label_element_type' => 'label',
    'label_class' => '',
  ),
  'field_pub_descricao' => array(
    'element_type' => 'div',
    'class' => '',
  ),
  'timestamp' => array(
    'element_type' => 'div',
    'class' => '',
    'label_element_type' => 'label',
    'label_class' => '',
  ),
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Thumbnail */
$handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['label'] = '';
$handler->display->display_options['fields']['field_thumbnail']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Campo: Conteúdo: Publicações */
$handler->display->display_options['fields']['field_publicacoes']['id'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['table'] = 'field_data_field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['field'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['label'] = '';
$handler->display->display_options['fields']['field_publicacoes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publicacoes']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_publicacoes']['type'] = 'i18n_taxonomy_term_reference_link';
$handler->display->display_options['fields']['field_publicacoes']['delta_offset'] = '0';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<p>[title]</p>';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Descrição */
$handler->display->display_options['fields']['field_pub_descricao']['id'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['table'] = 'field_data_field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['field'] = 'field_pub_descricao';
$handler->display->display_options['fields']['field_pub_descricao']['label'] = '';
$handler->display->display_options['fields']['field_pub_descricao']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_pub_descricao']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_pub_descricao']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_pub_descricao']['settings'] = array(
  'trim_length' => '600',
);
/* Campo: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Conteúdo: Has taxonomy term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['default_action'] = 'default';
$handler->display->display_options['arguments']['tid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = '595';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
$handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
  'publicacoes' => 'publicacoes',
);
$translatables['taxonomy_term'] = array(
  t('Master'),
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
  t('Título'),
  t('<p>[title]</p>'),
  t('Última modificação'),
  t('Tudo'),
  t('Page'),
  t('<h5>[title]</h5>'),
  t('Feed'),
  t('Contexto'),
  t('Boletim Epi EVA Field'),
  t('Boletim References'),
  t('Boletim Bloco'),
  t('Veja também'),
);
