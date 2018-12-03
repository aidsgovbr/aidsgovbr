<?php 
$view = new view();
$view->name = 'sociedade_civil_organizada_conteudo_relacionado';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'sociedade_civil_organizada_conteudo_relacionado';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'sociedade_civil_organizada_conteudo_relacionado';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'semanticviews_default';
$handler->display->display_options['style_options']['group']['element_type'] = 'h4';
$handler->display->display_options['style_options']['group']['class'] = '';
$handler->display->display_options['style_options']['list']['element_type'] = 'ul';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Rodapé: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = '<p class="font-galeria-more"><a href="../galeria-fotos">Saiba mais     <img src="/drupal/sites/default/files/media/media-icons/default/btn-agenda-azul-claro.png"></a></p>';
$handler->display->display_options['footer']['area']['format'] = 'html';
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
$handler->display->display_options['sorts']['created']['granularity'] = 'minute';
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Conteúdo: Has taxonomy term */
$handler->display->display_options['filters']['tid']['id'] = 'tid';
$handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['filters']['tid']['field'] = 'tid';
$handler->display->display_options['filters']['tid']['value'] = array(
  0 => '718',
);
$handler->display->display_options['filters']['tid']['vocabulary'] = 'publico';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['block_description'] = 'Sociedade Civil';
$translatables['sociedade_civil_organizada_conteudo_relacionado'] = array(
  t('Master'),
  t('sociedade_civil_organizada_conteudo_relacionado'),
  t('more'),
  t('Apply'),
  t('Reiniciar'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('<p class="font-galeria-more"><a href="../galeria-fotos">Saiba mais     <img src="/drupal/sites/default/files/media/media-icons/default/btn-agenda-azul-claro.png"></a></p>'),
  t('Block'),
  t('Sociedade Civil'),
);
