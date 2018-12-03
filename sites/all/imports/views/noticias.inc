<?php 
$view = new view();
$view->name = 'noticias';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Noticias';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Noticias';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
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
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
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
/* Campo: Conteúdo: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
  'noticia' => 'noticia',
);

/* Display: Notícias em destaque - Content pane */
$handler = $view->new_display('panel_pane', 'Notícias em destaque - Content pane', 'panel_pane_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = TRUE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'chapeau_editoria_frontpage_230_136',
  'image_link' => 'content',
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Chapéu */
$handler->display->display_options['fields']['field_noticia_chapeu']['id'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['table'] = 'field_data_field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['field'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['label'] = '';
$handler->display->display_options['fields']['field_noticia_chapeu']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_chapeu']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Sutia */
$handler->display->display_options['fields']['field_noticia_sutia']['id'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['table'] = 'field_data_field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['field'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['label'] = '';
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['text'] = '<img class="left" [field_noticia_imagem_de_capa]>
<h2 class="title">[title]</h2>
<p>[field_noticia_sutia] </p>';
$handler->display->display_options['fields']['field_noticia_sutia']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Conteúdo: Ordem da notícia no FrontPage (field_ordem_da_noticia) */
$handler->display->display_options['sorts']['field_ordem_da_noticia_tid']['id'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['sorts']['field_ordem_da_noticia_tid']['table'] = 'field_data_field_ordem_da_noticia';
$handler->display->display_options['sorts']['field_ordem_da_noticia_tid']['field'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content revision: Publicado */
$handler->display->display_options['filters']['latest_published']['id'] = 'latest_published';
$handler->display->display_options['filters']['latest_published']['table'] = 'node_revision';
$handler->display->display_options['filters']['latest_published']['field'] = 'latest_published';
$handler->display->display_options['filters']['latest_published']['value'] = '1';
$handler->display->display_options['filters']['latest_published']['group'] = 1;
/* Filter criterion: Conteúdo: Tipo */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'noticia' => 'noticia',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Conteúdo: Promovido para a página inicial */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['filters']['promote']['group'] = 1;
/* Filter criterion: Conteúdo: Sticky */
$handler->display->display_options['filters']['sticky']['id'] = 'sticky';
$handler->display->display_options['filters']['sticky']['table'] = 'node';
$handler->display->display_options['filters']['sticky']['field'] = 'sticky';
$handler->display->display_options['filters']['sticky']['value'] = '0';
$handler->display->display_options['filters']['sticky']['group'] = 1;
$handler->display->display_options['allow']['use_pager'] = 0;
$handler->display->display_options['allow']['items_per_page'] = 0;
$handler->display->display_options['allow']['offset'] = 'offset';
$handler->display->display_options['allow']['link_to_view'] = 0;
$handler->display->display_options['allow']['more_link'] = 0;
$handler->display->display_options['allow']['path_override'] = 0;
$handler->display->display_options['allow']['title_override'] = 0;
$handler->display->display_options['allow']['exposed_form'] = 0;
$handler->display->display_options['allow']['fields_override'] = 0;

/* Display: Notícias FrontPage Topo */
$handler = $view->new_display('block', 'Notícias FrontPage Topo', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'CHAPÉU DA EDITORIA';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['style_options']['group']['element_type'] = 'h1';
$handler->display->display_options['style_options']['list']['class'] = 'tile-description';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="tile-subtitle">Chapéu da editoria</p>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'chapeau_editoria_frontpage_230_136',
  'image_link' => '',
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['max_length'] = '55';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Chapéu */
$handler->display->display_options['fields']['field_noticia_chapeu']['id'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['table'] = 'field_data_field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['field'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['label'] = '';
$handler->display->display_options['fields']['field_noticia_chapeu']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_chapeu']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Sutia */
$handler->display->display_options['fields']['field_noticia_sutia']['id'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['table'] = 'field_data_field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['field'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['label'] = '';
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['text'] = '
<img class="left" [field_noticia_imagem_de_capa]>
<h1>[title]</h1>
<p>[field_noticia_sutia] </p>';
$handler->display->display_options['fields']['field_noticia_sutia']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Content revision: Updated date */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Campo: Thumbnail (field_pub_thumbnail:fid) */
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['id'] = 'field_pub_thumbnail_fid';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['table'] = 'field_data_field_pub_thumbnail';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['field'] = 'field_pub_thumbnail_fid';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary_options']['items_per_page'] = '25';
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
  'noticia' => 'noticia',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content revision: Publicado */
$handler->display->display_options['filters']['latest_published']['id'] = 'latest_published';
$handler->display->display_options['filters']['latest_published']['table'] = 'node_revision';
$handler->display->display_options['filters']['latest_published']['field'] = 'latest_published';
$handler->display->display_options['filters']['latest_published']['value'] = '1';
/* Filter criterion: Conteúdo: Sticky */
$handler->display->display_options['filters']['sticky']['id'] = 'sticky';
$handler->display->display_options['filters']['sticky']['table'] = 'node';
$handler->display->display_options['filters']['sticky']['field'] = 'sticky';
$handler->display->display_options['filters']['sticky']['value'] = '1';

/* Display: Notícias FrontPage Left */
$handler = $view->new_display('block', 'Notícias FrontPage Left', 'block_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'Notícias FrontPage left';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['style_options']['group']['element_type'] = 'h1';
$handler->display->display_options['style_options']['list']['class'] = 'tile-description';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'chapeau_editoria_frontpage_230_136',
  'image_link' => 'content',
);
/* Campo: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<hr class="style1">';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['max_length'] = '55';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Título alternativo */
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['id'] = 'field_noticia_titulo_alternativo';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['table'] = 'field_data_field_noticia_titulo_alternativo';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['field'] = 'field_noticia_titulo_alternativo';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['label'] = '';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['alter']['max_length'] = '55';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Chapéu */
$handler->display->display_options['fields']['field_noticia_chapeu']['id'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['table'] = 'field_data_field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['field'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['label'] = '';
$handler->display->display_options['fields']['field_noticia_chapeu']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_chapeu']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Sutia */
$handler->display->display_options['fields']['field_noticia_sutia']['id'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['table'] = 'field_data_field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['field'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['label'] = '';
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['text'] = '<img class="destaque left" [field_noticia_imagem_de_capa]>
<h2 class="title">[title]</h2>
<p>[field_noticia_sutia] </p>';
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['path'] = '[title]';
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['max_length'] = '100';
$handler->display->display_options['fields']['field_noticia_sutia']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Conteúdo: Ordem da notícia no FrontPage (field_ordem_da_noticia) */
$handler->display->display_options['sorts']['field_ordem_da_noticia_tid']['id'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['sorts']['field_ordem_da_noticia_tid']['table'] = 'field_data_field_ordem_da_noticia';
$handler->display->display_options['sorts']['field_ordem_da_noticia_tid']['field'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Campo: Thumbnail (field_pub_thumbnail:fid) */
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['id'] = 'field_pub_thumbnail_fid';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['table'] = 'field_data_field_pub_thumbnail';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['field'] = 'field_pub_thumbnail_fid';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary_options']['items_per_page'] = '25';
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
  'noticia' => 'noticia',
);
/* Filter criterion: Conteúdo: Promovido para a página inicial */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
/* Filter criterion: Conteúdo: Ordem da notícia no FrontPage (field_ordem_da_noticia) */
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['id'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['table'] = 'field_data_field_ordem_da_noticia';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['field'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['operator'] = 'and';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['value'] = array(
  734 => '734',
);
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['vocabulary'] = 'noticia_em_destaque';

/* Display: Notícias FrontPage Center */
$handler = $view->new_display('block', 'Notícias FrontPage Center', 'block_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'Notícias FrontPage center';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['style_options']['group']['element_type'] = 'h1';
$handler->display->display_options['style_options']['list']['class'] = 'tile-description';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="tile-subtitle">Chapéu da editoria</p>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'chapeau_editoria_frontpage_230_136',
  'image_link' => 'content',
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['max_length'] = '55';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Título alternativo */
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['id'] = 'field_noticia_titulo_alternativo';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['table'] = 'field_data_field_noticia_titulo_alternativo';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['field'] = 'field_noticia_titulo_alternativo';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['exclude'] = TRUE;
/* Campo: Conteúdo: Chapéu */
$handler->display->display_options['fields']['field_noticia_chapeu']['id'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['table'] = 'field_data_field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['field'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['label'] = '';
$handler->display->display_options['fields']['field_noticia_chapeu']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_chapeu']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Sutia */
$handler->display->display_options['fields']['field_noticia_sutia']['id'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['table'] = 'field_data_field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['field'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['label'] = '';
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['text'] = '<img class="left" [field_noticia_imagem_de_capa]>
<h2 class="title">[title]</h2>
<p>[field_noticia_sutia] </p>';
$handler->display->display_options['fields']['field_noticia_sutia']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Campo: Thumbnail (field_pub_thumbnail:fid) */
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['id'] = 'field_pub_thumbnail_fid';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['table'] = 'field_data_field_pub_thumbnail';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['field'] = 'field_pub_thumbnail_fid';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Conteúdo: Promovido para a página inicial */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['filters']['promote']['group'] = 1;
/* Filter criterion: Conteúdo: Tipo */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'noticia' => 'noticia',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Conteúdo: Sticky */
$handler->display->display_options['filters']['sticky']['id'] = 'sticky';
$handler->display->display_options['filters']['sticky']['table'] = 'node';
$handler->display->display_options['filters']['sticky']['field'] = 'sticky';
$handler->display->display_options['filters']['sticky']['value'] = '0';
/* Filter criterion: Conteúdo: Ordem da notícia no FrontPage (field_ordem_da_noticia) */
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['id'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['table'] = 'field_data_field_ordem_da_noticia';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['field'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['operator'] = 'and';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['value'] = array(
  735 => '735',
);
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['vocabulary'] = 'noticia_em_destaque';

/* Display: Notícias FrontPage Right */
$handler = $view->new_display('block', 'Notícias FrontPage Right', 'block_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['display_description'] = 'Notícias FrontPage right';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['style_options']['group']['element_type'] = 'h1';
$handler->display->display_options['style_options']['list']['class'] = 'tile-description';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="tile-subtitle">Chapéu da editoria</p>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'chapeau_editoria_frontpage_230_136',
  'image_link' => 'content',
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['max_length'] = '55';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Título alternativo */
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['id'] = 'field_noticia_titulo_alternativo';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['table'] = 'field_data_field_noticia_titulo_alternativo';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['field'] = 'field_noticia_titulo_alternativo';
$handler->display->display_options['fields']['field_noticia_titulo_alternativo']['exclude'] = TRUE;
/* Campo: Conteúdo: Chapéu */
$handler->display->display_options['fields']['field_noticia_chapeu']['id'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['table'] = 'field_data_field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['field'] = 'field_noticia_chapeu';
$handler->display->display_options['fields']['field_noticia_chapeu']['label'] = '';
$handler->display->display_options['fields']['field_noticia_chapeu']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_chapeu']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Sutia */
$handler->display->display_options['fields']['field_noticia_sutia']['id'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['table'] = 'field_data_field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['field'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['label'] = '';
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_noticia_sutia']['alter']['text'] = '<img class="left" [field_noticia_imagem_de_capa]>
<h2 class="title">[title]</h2>
<p>[field_noticia_sutia] </p>';
$handler->display->display_options['fields']['field_noticia_sutia']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Campo: Thumbnail (field_pub_thumbnail:fid) */
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['id'] = 'field_pub_thumbnail_fid';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['table'] = 'field_data_field_pub_thumbnail';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['field'] = 'field_pub_thumbnail_fid';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_pub_thumbnail_fid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Conteúdo: Promovido para a página inicial */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['filters']['promote']['group'] = 1;
/* Filter criterion: Conteúdo: Tipo */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'noticia' => 'noticia',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Conteúdo: Sticky */
$handler->display->display_options['filters']['sticky']['id'] = 'sticky';
$handler->display->display_options['filters']['sticky']['table'] = 'node';
$handler->display->display_options['filters']['sticky']['field'] = 'sticky';
$handler->display->display_options['filters']['sticky']['value'] = '0';
/* Filter criterion: Conteúdo: Ordem da notícia no FrontPage (field_ordem_da_noticia) */
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['id'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['table'] = 'field_data_field_ordem_da_noticia';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['field'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['operator'] = 'and';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['value'] = array(
  736 => '736',
);
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_ordem_da_noticia_tid']['vocabulary'] = 'noticia_em_destaque';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'field_noticia_tipo',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['columns'] = array(
  'field_noticia_imagem_de_capa' => 'field_noticia_imagem_de_capa',
  'title' => 'title',
  'created' => 'created',
  'field_noticia_tipo' => 'field_noticia_tipo',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_noticia_imagem_de_capa' => array(
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
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_noticia_tipo' => array(
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
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'thumbnail-noticia-lista',
  'image_link' => '',
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['text'] = '[field_noticia_imagem_de_capa] [title] - <i>[created]</i>';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Campo: Conteúdo: Típo da notícia */
$handler->display->display_options['fields']['field_noticia_tipo']['id'] = 'field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['table'] = 'field_data_field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['field'] = 'field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['label'] = '';
$handler->display->display_options['fields']['field_noticia_tipo']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_tipo']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_tipo']['type'] = 'i18n_taxonomy_term_reference_link';
$handler->display->display_options['path'] = 'noticias-todas';
$handler->display->display_options['menu']['title'] = 'Notícias';
$handler->display->display_options['menu']['description'] = 'Notícias';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-acesso-informacao-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';

/* Display: Notícias - todas */
$handler = $view->new_display('page', 'Notícias - todas', 'page_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Mais noticias';
$handler->display->display_options['display_description'] = 'lista das noticias';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'field_noticia_imagem_de_capa' => 'field_noticia_imagem_de_capa',
  'title' => 'title',
  'field_noticia_sutia' => 'field_noticia_sutia',
  'field_noticia_tipo' => 'field_noticia_tipo',
  'created' => 'created',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_noticia_imagem_de_capa' => array(
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
  'field_noticia_sutia' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_noticia_tipo' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 'striped',
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'chapeau_editoria_frontpage_230_136',
  'image_link' => '',
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Sutia */
$handler->display->display_options['fields']['field_noticia_sutia']['id'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['table'] = 'field_data_field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['field'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['label'] = '';
$handler->display->display_options['fields']['field_noticia_sutia']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_sutia']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Típo da notícia */
$handler->display->display_options['fields']['field_noticia_tipo']['id'] = 'field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['table'] = 'field_data_field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['field'] = 'field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['label'] = '';
$handler->display->display_options['fields']['field_noticia_tipo']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_tipo']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_tipo']['type'] = 'i18n_taxonomy_term_reference_link';
/* Campo: Conteúdo: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['text'] = '[field_noticia_imagem_de_capa]   <strong>[title]</strong> - <i>[created] </i>
';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Conteúdo: Típo da notícia (field_noticia_tipo) */
$handler->display->display_options['sorts']['field_noticia_tipo_tid']['id'] = 'field_noticia_tipo_tid';
$handler->display->display_options['sorts']['field_noticia_tipo_tid']['table'] = 'field_data_field_noticia_tipo';
$handler->display->display_options['sorts']['field_noticia_tipo_tid']['field'] = 'field_noticia_tipo_tid';
/* Sort criterion: Conteúdo: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'noticia' => 'noticia',
);
$handler->display->display_options['path'] = 'noticias';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Notícias';
$handler->display->display_options['menu']['description'] = 'Notícias';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-acesso-informacao-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Mais notícias */
$handler = $view->new_display('page', 'Mais notícias', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Mais noticias';
$handler->display->display_options['display_description'] = 'lista das noticias';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'chapeau_editoria_frontpage_230_136',
  'image_link' => '',
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Sutia */
$handler->display->display_options['fields']['field_noticia_sutia']['id'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['table'] = 'field_data_field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['field'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['label'] = '';
$handler->display->display_options['fields']['field_noticia_sutia']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_sutia']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Típo da notícia */
$handler->display->display_options['fields']['field_noticia_tipo']['id'] = 'field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['table'] = 'field_data_field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['field'] = 'field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['label'] = '';
$handler->display->display_options['fields']['field_noticia_tipo']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_tipo']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_tipo']['type'] = 'i18n_taxonomy_term_reference_link';
/* Campo: Conteúdo: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['text'] = '[title]
';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Conteúdo: Típo da notícia (field_noticia_tipo) */
$handler->display->display_options['sorts']['field_noticia_tipo_tid']['id'] = 'field_noticia_tipo_tid';
$handler->display->display_options['sorts']['field_noticia_tipo_tid']['table'] = 'field_data_field_noticia_tipo';
$handler->display->display_options['sorts']['field_noticia_tipo_tid']['field'] = 'field_noticia_tipo_tid';
/* Sort criterion: Conteúdo: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'noticia' => 'noticia',
);
/* Filter criterion: Conteúdo: Promovido para a página inicial */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '0';
/* Filter criterion: Conteúdo: Sticky */
$handler->display->display_options['filters']['sticky']['id'] = 'sticky';
$handler->display->display_options['filters']['sticky']['table'] = 'node';
$handler->display->display_options['filters']['sticky']['field'] = 'sticky';
$handler->display->display_options['filters']['sticky']['value'] = '0';
$handler->display->display_options['path'] = 'mais-noticias';
$handler->display->display_options['menu']['title'] = 'Notícias';
$handler->display->display_options['menu']['description'] = 'Notícias';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-acesso-informacao-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: ADMIN Notícias - todas */
$handler = $view->new_display('page', 'ADMIN Notícias - todas', 'page_3');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Mais noticias';
$handler->display->display_options['display_description'] = 'lista das noticias';
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  6 => '6',
);
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Campo: Bulk operations: Conteúdo */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Editar';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_make_sticky_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        'noticia::field_ordem_da_noticia' => 'noticia::field_ordem_da_noticia',
      ),
    ),
  ),
  'action::node_promote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => '',
  ),
  'action::node_unpromote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => '',
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => '',
  ),
  'action::node_save_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Campo: Conteúdo: Imagem de capa */
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['id'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['table'] = 'field_data_field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['field'] = 'field_noticia_imagem_de_capa';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['label'] = '';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_noticia_imagem_de_capa']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Sutia */
$handler->display->display_options['fields']['field_noticia_sutia']['id'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['table'] = 'field_data_field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['field'] = 'field_noticia_sutia';
$handler->display->display_options['fields']['field_noticia_sutia']['label'] = '';
$handler->display->display_options['fields']['field_noticia_sutia']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_sutia']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Típo da notícia */
$handler->display->display_options['fields']['field_noticia_tipo']['id'] = 'field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['table'] = 'field_data_field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['field'] = 'field_noticia_tipo';
$handler->display->display_options['fields']['field_noticia_tipo']['label'] = '';
$handler->display->display_options['fields']['field_noticia_tipo']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_noticia_tipo']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_noticia_tipo']['type'] = 'i18n_taxonomy_term_reference_link';
/* Campo: Conteúdo: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['text'] = '[field_noticia_imagem_de_capa]  [title] - <i>[created] </i>
';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'curta_publicacoes';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Campo: Conteúdo: Ordem da notícia no FrontPage */
$handler->display->display_options['fields']['field_ordem_da_noticia']['id'] = 'field_ordem_da_noticia';
$handler->display->display_options['fields']['field_ordem_da_noticia']['table'] = 'field_data_field_ordem_da_noticia';
$handler->display->display_options['fields']['field_ordem_da_noticia']['field'] = 'field_ordem_da_noticia';
$handler->display->display_options['fields']['field_ordem_da_noticia']['type'] = 'i18n_taxonomy_term_reference_link';
/* Campo: Conteúdo: Promovido para a página inicial */
$handler->display->display_options['fields']['promote']['id'] = 'promote';
$handler->display->display_options['fields']['promote']['table'] = 'node';
$handler->display->display_options['fields']['promote']['field'] = 'promote';
$handler->display->display_options['fields']['promote']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['promote']['alter']['text'] = '<div class="[promote] ">[promote] </div>';
$handler->display->display_options['fields']['promote']['not'] = 0;
/* Campo: Conteúdo: Sticky */
$handler->display->display_options['fields']['sticky']['id'] = 'sticky';
$handler->display->display_options['fields']['sticky']['table'] = 'node';
$handler->display->display_options['fields']['sticky']['field'] = 'sticky';
$handler->display->display_options['fields']['sticky']['label'] = 'Destaque no topo?';
$handler->display->display_options['fields']['sticky']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['sticky']['alter']['text'] = '<div class="[sticky] ">[sticky] </div>';
$handler->display->display_options['fields']['sticky']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['sticky']['not'] = 0;
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: Conteúdo: Ordem da notícia no FrontPage (field_ordem_da_noticia) */
$handler->display->display_options['sorts']['field_ordem_da_noticia_tid']['id'] = 'field_ordem_da_noticia_tid';
$handler->display->display_options['sorts']['field_ordem_da_noticia_tid']['table'] = 'field_data_field_ordem_da_noticia';
$handler->display->display_options['sorts']['field_ordem_da_noticia_tid']['field'] = 'field_ordem_da_noticia_tid';
/* Sort criterion: Conteúdo: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'noticia' => 'noticia',
);
/* Filter criterion: Conteúdo: Promovido para a página inicial */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['path'] = 'noticias-admin';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'ADMIN Notícias';
$handler->display->display_options['menu']['description'] = 'ADMIN Notícias';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-acesso-informacao-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['noticias'] = array(
  t('Master'),
  t('Noticias'),
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
  t('Post date'),
  t('Notícias em destaque - Content pane'),
  t('<img class="left" [field_noticia_imagem_de_capa]>
<h2 class="title">[title]</h2>
<p>[field_noticia_sutia] </p>'),
  t('View panes'),
  t('Notícias FrontPage Topo'),
  t('CHAPÉU DA EDITORIA'),
  t('<p class="tile-subtitle">Chapéu da editoria</p>'),
  t('
<img class="left" [field_noticia_imagem_de_capa]>
<h1>[title]</h1>
<p>[field_noticia_sutia] </p>'),
  t('Tudo'),
  t('Notícias FrontPage Left'),
  t('Notícias FrontPage left'),
  t('<hr class="style1">'),
  t('<img class="destaque left" [field_noticia_imagem_de_capa]>
<h2 class="title">[title]</h2>
<p>[field_noticia_sutia] </p>'),
  t('Notícias FrontPage Center'),
  t('Notícias FrontPage center'),
  t('Título alternativo'),
  t('Notícias FrontPage Right'),
  t('Notícias FrontPage right'),
  t('Page'),
  t('[field_noticia_imagem_de_capa] [title] - <i>[created]</i>'),
  t('Block'),
  t('Notícias - todas'),
  t('Mais noticias'),
  t('lista das noticias'),
  t('[field_noticia_imagem_de_capa]   <strong>[title]</strong> - <i>[created] </i>
'),
  t('Mais notícias'),
  t('[title]
'),
  t('ADMIN Notícias - todas'),
  t('Nid'),
  t('Editar'),
  t('- Choose an operation -'),
  t('[field_noticia_imagem_de_capa]  [title] - <i>[created] </i>
'),
  t('Ordem da notícia no FrontPage'),
  t('Promovido para a página inicial'),
  t('<div class="[promote] ">[promote] </div>'),
  t('Destaque no topo?'),
  t('<div class="[sticky] ">[sticky] </div>'),
);
