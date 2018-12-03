<?php 
$view = new view();
$view->name = 'publicacoes';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Publicações';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Publicações';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_thumbnail' => 'field_thumbnail',
  'title' => 'title',
  'filedepot_folder_file' => 'title',
  'field_data_de_publicacao' => 'field_data_de_publicacao',
  'field_publicacoes' => 'field_publicacoes',
  'timestamp' => 'timestamp',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_thumbnail' => array(
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
  'filedepot_folder_file' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_data_de_publicacao' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_publicacoes' => array(
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
$handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Campo: Conteúdo: Arquivos */
$handler->display->display_options['fields']['filedepot_folder_file']['id'] = 'filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['table'] = 'field_data_filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['field'] = 'filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['text'] = '<strong>[filedepot_folder_file] -  </strong>';
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['preserve_tags'] = '<strong>';
$handler->display->display_options['fields']['filedepot_folder_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['filedepot_folder_file']['settings'] = array(
  'file_view_mode' => 'teaser',
);
$handler->display->display_options['fields']['filedepot_folder_file']['delta_offset'] = '0';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Campo: Conteúdo: Data de Publicação */
$handler->display->display_options['fields']['field_data_de_publicacao']['id'] = 'field_data_de_publicacao';
$handler->display->display_options['fields']['field_data_de_publicacao']['table'] = 'field_data_field_data_de_publicacao';
$handler->display->display_options['fields']['field_data_de_publicacao']['field'] = 'field_data_de_publicacao';
$handler->display->display_options['fields']['field_data_de_publicacao']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_data_de_publicacao']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Campo: Conteúdo: Publicações */
$handler->display->display_options['fields']['field_publicacoes']['id'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['table'] = 'field_data_field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['field'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publicacoes']['type'] = 'i18n_taxonomy_term_reference_link';
/* Campo: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Última atualização';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Campo: Conteúdo: Descrição */
$handler->display->display_options['fields']['field_descricao']['id'] = 'field_descricao';
$handler->display->display_options['fields']['field_descricao']['table'] = 'field_data_field_descricao';
$handler->display->display_options['fields']['field_descricao']['field'] = 'field_descricao';
$handler->display->display_options['fields']['field_descricao']['label'] = '';
$handler->display->display_options['fields']['field_descricao']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_descricao']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_descricao']['settings'] = array(
  'trim_length' => '600',
);
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
  'publicacao' => 'publicacao',
);
/* Filter criterion: Conteúdo: Idioma */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);

/* Display: Publicações */
$handler = $view->new_display('page', 'Publicações', 'page');
$handler->display->display_options['display_description'] = 'Uma lista das Publicações em pt-br';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_pub_thumbnail' => 'field_pub_thumbnail',
  'filedepot_folder_file' => 'title',
  'title' => 'title',
  'field_data_de_publicacao' => 'field_data_de_publicacao',
  'field_publicacoes' => 'field_publicacoes',
  'timestamp' => 'timestamp',
  'field_descricao' => 'title',
);
$handler->display->display_options['style_options']['default'] = 'field_data_de_publicacao';
$handler->display->display_options['style_options']['info'] = array(
  'field_pub_thumbnail' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'filedepot_folder_file' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'desc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_data_de_publicacao' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_publicacoes' => array(
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_descricao' => array(
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
/* Campo: Conteúdo: Arquivos */
$handler->display->display_options['fields']['filedepot_folder_file']['id'] = 'filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['table'] = 'field_data_filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['field'] = 'filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['text'] = '<strong>[filedepot_folder_file] -  </strong>';
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['preserve_tags'] = '<strong>';
$handler->display->display_options['fields']['filedepot_folder_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['filedepot_folder_file']['settings'] = array(
  'file_view_mode' => 'teaser',
);
$handler->display->display_options['fields']['filedepot_folder_file']['delta_offset'] = '0';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Campo: Conteúdo: Publicações */
$handler->display->display_options['fields']['field_publicacoes']['id'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['table'] = 'field_data_field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['field'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publicacoes']['type'] = 'i18n_taxonomy_term_reference_link';
/* Campo: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Última atualização';
$handler->display->display_options['fields']['timestamp']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
/* Campo: Conteúdo: Descrição */
$handler->display->display_options['fields']['field_descricao']['id'] = 'field_descricao';
$handler->display->display_options['fields']['field_descricao']['table'] = 'field_data_field_descricao';
$handler->display->display_options['fields']['field_descricao']['field'] = 'field_descricao';
$handler->display->display_options['fields']['field_descricao']['label'] = '';
$handler->display->display_options['fields']['field_descricao']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_descricao']['alter']['text'] = '
<i>[field_descricao-summary] </i>';
$handler->display->display_options['fields']['field_descricao']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_descricao']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_descricao']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['field_descricao']['settings'] = array(
  'trim_length' => '600',
);
/* Campo: Conteúdo: Data da publicação */
$handler->display->display_options['fields']['field_pub_data_da_publicacao']['id'] = 'field_pub_data_da_publicacao';
$handler->display->display_options['fields']['field_pub_data_da_publicacao']['table'] = 'field_data_field_pub_data_da_publicacao';
$handler->display->display_options['fields']['field_pub_data_da_publicacao']['field'] = 'field_pub_data_da_publicacao';
$handler->display->display_options['fields']['field_pub_data_da_publicacao']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_pub_data_da_publicacao']['settings'] = array(
  'format_type' => 'curta_publicacoes',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Conteúdo: Data da publicação (field_pub_data_da_publicacao) */
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['id'] = 'field_pub_data_da_publicacao_value';
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['table'] = 'field_data_field_pub_data_da_publicacao';
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['field'] = 'field_pub_data_da_publicacao_value';
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['order'] = 'DESC';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'publicacao' => 'publicacao',
);
/* Filter criterion: Conteúdo: Idioma */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  'pt-br' => 'pt-br',
);
$handler->display->display_options['path'] = 'publicacoes-todas';
$handler->display->display_options['menu']['title'] = 'Publicações';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-acesso-informacao';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'publica-es.xml';
$handler->display->display_options['displays'] = array(
  'default' => 'default',
  'page' => 'page',
);

/* Display: Publications */
$handler = $view->new_display('page', 'Publications', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Publications';
$handler->display->display_options['display_description'] = 'Uma lista das Publicações em inglês';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'publicacao' => 'publicacao',
);
/* Filter criterion: Conteúdo: Idioma */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  'en' => 'en',
);
$handler->display->display_options['path'] = 'publications';
$handler->display->display_options['menu']['title'] = 'Publicações';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-acesso-informacao';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Publicaciones  */
$handler = $view->new_display('page', 'Publicaciones ', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Publicaciones';
$handler->display->display_options['display_description'] = 'Uma lista das Publicações em espanhol';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'publicacao' => 'publicacao',
);
/* Filter criterion: Conteúdo: Idioma */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  'es' => 'es',
);
$handler->display->display_options['path'] = 'publicaciones';
$handler->display->display_options['menu']['title'] = 'Publicações';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-acesso-informacao';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Glossary block */
$handler = $view->new_display('block', 'Glossary block', 'block_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Thumbnail */
$handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
$handler->display->display_options['fields']['field_thumbnail']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_thumbnail']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Campo: Conteúdo: Arquivos */
$handler->display->display_options['fields']['filedepot_folder_file']['id'] = 'filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['table'] = 'field_data_filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['field'] = 'filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['exclude'] = TRUE;
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['text'] = '<strong>[filedepot_folder_file] -  </strong>';
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['preserve_tags'] = '<strong>';
$handler->display->display_options['fields']['filedepot_folder_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['filedepot_folder_file']['settings'] = array(
  'file_view_mode' => 'teaser',
);
$handler->display->display_options['fields']['filedepot_folder_file']['delta_offset'] = '0';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Campo: Conteúdo: Data de Publicação */
$handler->display->display_options['fields']['field_data_de_publicacao']['id'] = 'field_data_de_publicacao';
$handler->display->display_options['fields']['field_data_de_publicacao']['table'] = 'field_data_field_data_de_publicacao';
$handler->display->display_options['fields']['field_data_de_publicacao']['field'] = 'field_data_de_publicacao';
$handler->display->display_options['fields']['field_data_de_publicacao']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_data_de_publicacao']['settings'] = array(
  'format_type' => 'short',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Campo: Conteúdo: Publicações */
$handler->display->display_options['fields']['field_publicacoes']['id'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['table'] = 'field_data_field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['field'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publicacoes']['type'] = 'i18n_taxonomy_term_reference_link';
/* Campo: Content revision: Updated date */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = 'Última atualização';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
$handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
$handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';

/* Display: Attachment */
$handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'counter' => 'counter',
  'filedepot_folder_file' => 'filedepot_folder_file',
  'title' => 'title',
  'field_publicacoes' => 'field_publicacoes',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'counter' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'filedepot_folder_file' => array(
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
  'field_publicacoes' => array(
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
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = '#';
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['fields']['counter']['reverse'] = 0;
/* Campo: Conteúdo: Arquivos */
$handler->display->display_options['fields']['filedepot_folder_file']['id'] = 'filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['table'] = 'field_data_filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['field'] = 'filedepot_folder_file';
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['text'] = '<strong>[filedepot_folder_file] -  </strong>';
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['filedepot_folder_file']['alter']['preserve_tags'] = '<strong>';
$handler->display->display_options['fields']['filedepot_folder_file']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['filedepot_folder_file']['settings'] = array(
  'file_view_mode' => 'teaser',
);
$handler->display->display_options['fields']['filedepot_folder_file']['delta_offset'] = '0';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = '[title]';
$handler->display->display_options['fields']['title']['alter']['target'] = ' _parent';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Campo: Conteúdo: Publicações */
$handler->display->display_options['fields']['field_publicacoes']['id'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['table'] = 'field_data_field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['field'] = 'field_publicacoes';
$handler->display->display_options['fields']['field_publicacoes']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_publicacoes']['type'] = 'i18n_taxonomy_term_reference_link';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Conteúdo: Data da publicação (field_pub_data_da_publicacao) */
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['id'] = 'field_pub_data_da_publicacao_value';
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['table'] = 'field_data_field_pub_data_da_publicacao';
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['field'] = 'field_pub_data_da_publicacao_value';
$handler->display->display_options['sorts']['field_pub_data_da_publicacao_value']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Conteúdo: Título */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['default_action'] = 'summary';
$handler->display->display_options['arguments']['title']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
$handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['title']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['title']['glossary'] = TRUE;
$handler->display->display_options['arguments']['title']['limit'] = '1';
$handler->display->display_options['arguments']['title']['case'] = 'upper';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'publicacao' => 'publicacao',
);
/* Filter criterion: Conteúdo: Idioma */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
);
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'page_1' => 'page_1',
  'page_2' => 'page_2',
  'block_1' => 'block_1',
  'default' => 0,
);
$handler->display->display_options['render_pager'] = TRUE;
$translatables['publicacoes'] = array(
  t('Master'),
  t('Publicações'),
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
  t('Thumbnail'),
  t('Arquivos'),
  t('<strong>[filedepot_folder_file] -  </strong>'),
  t('Data de Publicação'),
  t('Última atualização'),
  t('Uma lista das Publicações em pt-br'),
  t('
<i>[field_descricao-summary] </i>'),
  t('Data da publicação'),
  t('Feed'),
  t('Publications'),
  t('Uma lista das Publicações em inglês'),
  t('Publicaciones '),
  t('Publicaciones'),
  t('Uma lista das Publicações em espanhol'),
  t('Glossary block'),
  t('Attachment'),
  t('#'),
  t('Tudo'),
);
