<?php 
$view = new view();
$view->name = 'slideshow';
$view->description = '';
$view->tag = 'slideshow';
$view->base_table = 'node';
$view->human_name = 'Slideshow';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Conteúdo: Foto (field_foto:fid) */
$handler->display->display_options['relationships']['field_foto_fid']['id'] = 'field_foto_fid';
$handler->display->display_options['relationships']['field_foto_fid']['table'] = 'field_data_field_foto';
$handler->display->display_options['relationships']['field_foto_fid']['field'] = 'field_foto_fid';
/* Campo: Conteúdo: Foto */
$handler->display->display_options['fields']['field_foto']['id'] = 'field_foto';
$handler->display->display_options['fields']['field_foto']['table'] = 'field_data_field_foto';
$handler->display->display_options['fields']['field_foto']['field'] = 'field_foto';
$handler->display->display_options['fields']['field_foto']['label'] = '';
$handler->display->display_options['fields']['field_foto']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_foto']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_foto']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_foto']['settings'] = array(
  'image_style' => 'medium_round__220x220_',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_foto']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_foto']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_foto']['delta_offset'] = '1';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Conteúdo: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'slideshow' => 'slideshow',
);
/* Filter criterion: Conteúdo: Foto (field_foto:delta) */
$handler->display->display_options['filters']['delta']['id'] = 'delta';
$handler->display->display_options['filters']['delta']['table'] = 'field_data_field_foto';
$handler->display->display_options['filters']['delta']['field'] = 'delta';
$handler->display->display_options['filters']['delta']['value']['value'] = '0';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Cabeçalho: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<h2 class="page_title">Galeria de fotos</h2>';
$handler->display->display_options['header']['area']['format'] = 'html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Foto */
$handler->display->display_options['fields']['field_foto']['id'] = 'field_foto';
$handler->display->display_options['fields']['field_foto']['table'] = 'field_data_field_foto';
$handler->display->display_options['fields']['field_foto']['field'] = 'field_foto';
$handler->display->display_options['fields']['field_foto']['label'] = '';
$handler->display->display_options['fields']['field_foto']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_foto']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_foto']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_foto']['settings'] = array(
  'image_style' => 'medium_round_220x220',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_foto']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_foto']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_foto']['delta_offset'] = '1';
/* Campo: Conteúdo: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
$handler->display->display_options['fields']['created']['timezone'] = 'America/Sao_Paulo';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<article>
<p><span>[created]<span></p>
<h4>[title]</h4>
</article>';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['path'] = 'galeria-fotos';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Slideshow';
$handler->display->display_options['menu']['name'] = 'menu-acesso-informacao';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Galeria de fotos';
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'semanticviews_fields';
$handler->display->display_options['row_options']['skip_blank'] = 0;
$handler->display->display_options['row_options']['semantic_html'] = array(
  'field_foto' => array(
    'element_type' => 'div',
    'class' => 'span4',
  ),
  'title' => array(
    'element_type' => 'h4',
    'class' => '',
  ),
);
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Rodapé: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = '<p class="font-galeria-more"><a href="../galeria-fotos">Acesse a lista completa     <img src="/drupal/sites/default/files/media/media-icons/default/btn-agenda-azul-claro.png"></a></p>';
$handler->display->display_options['footer']['area']['format'] = 'html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Foto */
$handler->display->display_options['fields']['field_foto']['id'] = 'field_foto';
$handler->display->display_options['fields']['field_foto']['table'] = 'field_data_field_foto';
$handler->display->display_options['fields']['field_foto']['field'] = 'field_foto';
$handler->display->display_options['fields']['field_foto']['label'] = '';
$handler->display->display_options['fields']['field_foto']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_foto']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_foto']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_foto']['settings'] = array(
  'image_style' => 'medium_round_220x220',
  'image_link' => 'content',
);
$handler->display->display_options['fields']['field_foto']['group_rows'] = FALSE;
$handler->display->display_options['fields']['field_foto']['delta_limit'] = '1';
$handler->display->display_options['fields']['field_foto']['delta_offset'] = '1';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['block_description'] = 'Galeria de fotos';
$translatables['slideshow'] = array(
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
  t('image from field_foto'),
  t('Page'),
  t('<h2 class="page_title">Galeria de fotos</h2>'),
  t('<article>
<p><span>[created]<span></p>
<h4>[title]</h4>
</article>'),
  t('Block'),
  t('Galeria de fotos'),
  t('<p class="font-galeria-more"><a href="../galeria-fotos">Acesse a lista completa     <img src="/drupal/sites/default/files/media/media-icons/default/btn-agenda-azul-claro.png"></a></p>'),
);
