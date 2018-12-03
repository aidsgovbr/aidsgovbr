<?php 
$view = new view();
$view->name = 'frontpage';
$view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Front page';
$view->core = 0;
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
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Sort criterion: Conteúdo: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
/* Sort criterion: Conteúdo: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Conteúdo: Promovido para a página inicial */
$handler->display->display_options['filters']['promote']['id'] = 'promote';
$handler->display->display_options['filters']['promote']['table'] = 'node';
$handler->display->display_options['filters']['promote']['field'] = 'promote';
$handler->display->display_options['filters']['promote']['value'] = '1';
$handler->display->display_options['filters']['promote']['group'] = 0;
$handler->display->display_options['filters']['promote']['expose']['operator'] = FALSE;
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: FrontPage */
$handler = $view->new_display('page', 'FrontPage', 'page');
$handler->display->display_options['path'] = 'frontpage';

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Front page feed';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['style_plugin'] = 'rss';
$handler->display->display_options['row_plugin'] = 'node_rss';
$handler->display->display_options['path'] = 'rss.xml';
$handler->display->display_options['displays'] = array(
  'default' => 'default',
  'page' => 'page',
);
$handler->display->display_options['sitename_title'] = '1';

/* Display: Attachment */
$handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'slideshow';
$handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
$handler->display->display_options['style_options']['slideshow_skin'] = 'default';
$handler->display->display_options['style_options']['skin_info'] = array(
  'class' => 'default',
  'name' => 'Padrão',
  'module' => 'views_slideshow',
  'path' => '',
  'stylesheets' => array(),
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'field_feature_slider_link' => 0,
  'field_feature_slider_foto' => 0,
  'field_feature_slider_foto_1' => 0,
  'field_feature_slider_titulo' => 0,
  'body' => 0,
);
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra_overlay']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra_overlay']['pause_after_mouse_move'] = '2000';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
  'field_feature_slider_link' => 0,
  'field_feature_slider_foto' => 0,
  'field_feature_slider_foto_1' => 0,
  'field_feature_slider_titulo' => 0,
  'body' => 0,
);
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '2';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra_overlay']['enable'] = 1;
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra_overlay']['weight'] = '1';
$handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra_overlay']['pause_after_mouse_move'] = '2000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
$handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
$handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
$handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
$handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
$handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Link */
$handler->display->display_options['fields']['field_feature_slider_link']['id'] = 'field_feature_slider_link';
$handler->display->display_options['fields']['field_feature_slider_link']['table'] = 'field_data_field_feature_slider_link';
$handler->display->display_options['fields']['field_feature_slider_link']['field'] = 'field_feature_slider_link';
$handler->display->display_options['fields']['field_feature_slider_link']['label'] = '';
$handler->display->display_options['fields']['field_feature_slider_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_feature_slider_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_feature_slider_link']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_feature_slider_link']['type'] = 'link_url';
/* Campo: Conteúdo: Foto */
$handler->display->display_options['fields']['field_feature_slider_foto']['id'] = 'field_feature_slider_foto';
$handler->display->display_options['fields']['field_feature_slider_foto']['table'] = 'field_data_field_feature_slider_foto';
$handler->display->display_options['fields']['field_feature_slider_foto']['field'] = 'field_feature_slider_foto';
$handler->display->display_options['fields']['field_feature_slider_foto']['label'] = '';
$handler->display->display_options['fields']['field_feature_slider_foto']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_feature_slider_foto']['alter']['path'] = '[field_feature_slider_link]';
$handler->display->display_options['fields']['field_feature_slider_foto']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_feature_slider_foto']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_feature_slider_foto']['settings'] = array(
  'image_style' => 'home_feature_slider',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_feature_slider_foto']['delta_offset'] = '0';
/* Campo: Conteúdo: Foto */
$handler->display->display_options['fields']['field_feature_slider_foto_1']['id'] = 'field_feature_slider_foto_1';
$handler->display->display_options['fields']['field_feature_slider_foto_1']['table'] = 'field_data_field_feature_slider_foto';
$handler->display->display_options['fields']['field_feature_slider_foto_1']['field'] = 'field_feature_slider_foto';
$handler->display->display_options['fields']['field_feature_slider_foto_1']['label'] = '';
$handler->display->display_options['fields']['field_feature_slider_foto_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_feature_slider_foto_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_feature_slider_foto_1']['alter']['text'] = '<span id="slideshow-pager-images">[field_feature_slider_foto]</span>';
$handler->display->display_options['fields']['field_feature_slider_foto_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_feature_slider_foto_1']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_feature_slider_foto_1']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_feature_slider_foto_1']['delta_offset'] = '0';
/* Campo: Conteúdo: Feature Slider título */
$handler->display->display_options['fields']['field_feature_slider_titulo']['id'] = 'field_feature_slider_titulo';
$handler->display->display_options['fields']['field_feature_slider_titulo']['table'] = 'field_data_field_feature_slider_titulo';
$handler->display->display_options['fields']['field_feature_slider_titulo']['field'] = 'field_feature_slider_titulo';
$handler->display->display_options['fields']['field_feature_slider_titulo']['label'] = '';
$handler->display->display_options['fields']['field_feature_slider_titulo']['element_label_colon'] = FALSE;
/* Campo: Conteúdo: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Conteúdo: Tipo */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'feature_slider' => 'feature_slider',
);
$handler->display->display_options['displays'] = array(
  'default' => 0,
  'page' => 0,
);

/* Display: overlay text */
$handler = $view->new_display('attachment', 'overlay text', 'attachment_2');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'overlay';
$handler->display->display_options['style_options']['overlay_delay'] = '850';
$handler->display->display_options['style_options']['overlay_fade_in'] = '0';
$handler->display->display_options['style_options']['overlay_fade_out'] = '0';
$handler->display->display_options['style_options']['overlay_fade_out_delay'] = '0';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Campo: Conteúdo: Link */
$handler->display->display_options['fields']['field_feature_slider_link']['id'] = 'field_feature_slider_link';
$handler->display->display_options['fields']['field_feature_slider_link']['table'] = 'field_data_field_feature_slider_link';
$handler->display->display_options['fields']['field_feature_slider_link']['field'] = 'field_feature_slider_link';
$handler->display->display_options['fields']['field_feature_slider_link']['label'] = '';
$handler->display->display_options['fields']['field_feature_slider_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_feature_slider_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_feature_slider_link']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_feature_slider_link']['type'] = 'link_url';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Campo: Conteúdo: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['body']['alter']['text'] = '<h2 class="feature-slider">[field_feature_slider_titulo] </h2>
[body]';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
);
$translatables['frontpage'] = array(
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
  t('FrontPage'),
  t('Feed'),
  t('Front page feed'),
  t('Attachment'),
  t('<span id="slideshow-pager-images">[field_feature_slider_foto]</span>'),
  t('overlay text'),
  t('<h2 class="feature-slider">[field_feature_slider_titulo] </h2>
[body]'),
);
