<?php 
$view = new view();
$view->name = 'semantic_demo';
$view->description = '';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Semantic Views demo';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
/* Campo: Conteúdo: Tipo */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
/* Campo: Conteúdo: Body */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_body';
$handler->display->display_options['fields']['entity_id']['field'] = 'body';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['entity_id']['settings'] = array(
  'trim_length' => '600',
);
/* Campo: Conteúdo: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
/* Campo: Conteúdo: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Unformatted (default) */
$handler = $view->new_display('page', 'Unformatted (default)', 'page_1');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['path'] = 'semantic-views-demo/unformatted';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Unformatted';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Semantic Views demo';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Grid (default) */
$handler = $view->new_display('page', 'Grid (default)', 'page_2');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'semantic-views-demo/grid';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Grid';
$handler->display->display_options['menu']['weight'] = '1';

/* Display: List (default) */
$handler = $view->new_display('page', 'List (default)', 'page_3');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'semantic-views-demo/list';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'List';
$handler->display->display_options['menu']['weight'] = '2';

/* Display: Unformatted (semantic) */
$handler = $view->new_display('page', 'Unformatted (semantic)', 'page_4');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'semanticviews_fields';
$handler->display->display_options['row_options']['skip_blank'] = 1;
$handler->display->display_options['row_options']['semantic_html'] = array(
  'title' => array(
    'element_type' => 'h2',
    'class' => 'title',
  ),
  'type' => array(
    'element_type' => 'div',
    'class' => 'node-type',
  ),
  'entity_id' => array(
    'element_type' => 'div',
    'class' => 'teaser',
  ),
  'delete_node' => array(
    'element_type' => 'div',
    'class' => 'delete',
    'label_element_type' => 'label',
    'label_class' => '',
  ),
  'edit_node' => array(
    'element_type' => 'div',
    'class' => 'edit',
    'label_element_type' => 'label',
    'label_class' => '',
  ),
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'semantic-views-demo/unformatted-semantic';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Unformatted (semantic)';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: Grid (semantic) */
$handler = $view->new_display('page', 'Grid (semantic)', 'page_5');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['style_options']['row']['class'] = 'grid-unit';
$handler->display->display_options['style_options']['row']['last_every_nth'] = '4';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'semanticviews_fields';
$handler->display->display_options['row_options']['skip_blank'] = 1;
$handler->display->display_options['row_options']['semantic_html'] = array(
  'title' => array(
    'element_type' => 'h2',
    'class' => 'title',
  ),
  'type' => array(
    'element_type' => 'div',
    'class' => 'node-type',
  ),
  'entity_id' => array(
    'element_type' => 'div',
    'class' => 'teaser',
  ),
  'delete_node' => array(
    'element_type' => 'div',
    'class' => 'delete',
    'label_element_type' => 'label',
    'label_class' => '',
  ),
  'edit_node' => array(
    'element_type' => 'div',
    'class' => 'edit',
    'label_element_type' => 'label',
    'label_class' => '',
  ),
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Cabeçalho: Global: Text area */
$handler->display->display_options['header']['text']['id'] = 'area';
$handler->display->display_options['header']['text']['table'] = 'views';
$handler->display->display_options['header']['text']['field'] = 'area';
$handler->display->display_options['header']['text']['content'] = '<style>
    .grid-unit {
      width: 20%;
      margin-right: 5%;
      float: left;
    }
    .first {
      clear: left;
    }
    .last {
      margin-right: 0;
    }
    </style>';
$handler->display->display_options['header']['text']['format'] = '2';
$handler->display->display_options['path'] = 'semantic-views-demo/grid-semantic';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Grid (semantic)';
$handler->display->display_options['menu']['weight'] = '1';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: List (semantic) */
$handler = $view->new_display('page', 'List (semantic)', 'page_6');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['style_options']['list']['element_type'] = 'ul';
$handler->display->display_options['style_options']['row']['element_type'] = 'li';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'semanticviews_fields';
$handler->display->display_options['row_options']['skip_blank'] = 1;
$handler->display->display_options['row_options']['semantic_html'] = array(
  'title' => array(
    'element_type' => 'h2',
    'class' => 'title',
  ),
  'type' => array(
    'element_type' => 'div',
    'class' => 'node-type',
  ),
  'entity_id' => array(
    'element_type' => 'div',
    'class' => 'teaser',
  ),
  'delete_node' => array(
    'element_type' => 'div',
    'class' => 'delete',
    'label_element_type' => 'label',
    'label_class' => '',
  ),
  'edit_node' => array(
    'element_type' => 'div',
    'class' => 'edit',
    'label_element_type' => 'label',
    'label_class' => '',
  ),
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['path'] = 'semantic-views-demo/list-semantic';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'List (semantic)';
$handler->display->display_options['menu']['weight'] = '2';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: List (semantic) FrontPage */
$handler = $view->new_display('page', 'List (semantic) FrontPage', 'page_7');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['style_options']['list']['element_type'] = 'ul';
$handler->display->display_options['style_options']['row']['element_type'] = 'li';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'semanticviews_fields';
$handler->display->display_options['row_options']['skip_blank'] = 1;
$handler->display->display_options['row_options']['semantic_html'] = array(
  'title' => array(
    'element_type' => 'h4',
    'class' => 'title',
  ),
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
/* Campo: Conteúdo: Tipo */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Body */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_body';
$handler->display->display_options['fields']['entity_id']['field'] = 'body';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['entity_id']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['entity_id']['settings'] = array(
  'trim_length' => '600',
);
/* Campo: Conteúdo: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
/* Campo: Conteúdo: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
$handler->display->display_options['path'] = 'semantic-views-demo/list-semantic';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'List (semantic)';
$handler->display->display_options['menu']['weight'] = '2';
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: FrontPage recent content block */
$handler = $view->new_display('block', 'FrontPage recent content block', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Conteúdo recente fp';
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '4';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['style_options']['group']['element_type'] = 'p';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Rodapé: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = '<p class="font-galeria-more"><a href="../drupal/noticias">Mais notícias    <img src="/drupal/sites/default/files/media/media-icons/default/btn-agenda-azul-claro.png"></a></p>';
$handler->display->display_options['footer']['area']['format'] = 'html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['preserve_tags'] = '<a>';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
/* Campo: Conteúdo: Tipo */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['label'] = '';
$handler->display->display_options['fields']['type']['exclude'] = TRUE;
$handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Body */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'field_data_body';
$handler->display->display_options['fields']['entity_id']['field'] = 'body';
$handler->display->display_options['fields']['entity_id']['label'] = '';
$handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['entity_id']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['entity_id']['settings'] = array(
  'trim_length' => '50',
);
/* Campo: Conteúdo: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
/* Campo: Conteúdo: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'media_thumbnail',
  'image_link' => '',
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Conteúdo: Tipo */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'noticia' => 'noticia',
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_noticia_peso_value']['id'] = 'field_noticia_peso_value';
$handler->display->display_options['filters']['field_noticia_peso_value']['table'] = 'field_data_field_noticia_peso';
$handler->display->display_options['filters']['field_noticia_peso_value']['field'] = 'field_noticia_peso_value';
$handler->display->display_options['filters']['field_noticia_peso_value']['operator'] = '<=';
$handler->display->display_options['filters']['field_noticia_peso_value']['value'] = array(
  'min' => '',
  'max' => '',
  'value' => '0',
);
$handler->display->display_options['block_description'] = 'Conteúdo recente fp';
$translatables['semantic_demo'] = array(
  t('Defaults'),
  t('Semantic Views demo'),
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
  t('Delete link'),
  t('Edit link'),
  t('Unformatted (default)'),
  t('Grid (default)'),
  t('List (default)'),
  t('Unformatted (semantic)'),
  t('Grid (semantic)'),
  t('<style>
    .grid-unit {
      width: 20%;
      margin-right: 5%;
      float: left;
    }
    .first {
      clear: left;
    }
    .last {
      margin-right: 0;
    }
    </style>'),
  t('List (semantic)'),
  t('List (semantic) FrontPage'),
  t('FrontPage recent content block'),
  t('Conteúdo recente fp'),
  t('<p class="font-galeria-more"><a href="../drupal/noticias">Mais notícias    <img src="/drupal/sites/default/files/media/media-icons/default/btn-agenda-azul-claro.png"></a></p>'),
);
