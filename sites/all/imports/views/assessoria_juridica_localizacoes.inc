<?php 
$view = new view();
$view->name = 'assessoria_juridica_localizacoes';
$view->description = 'Location directory filtered by arguments in the url.';
$view->tag = '';
$view->base_table = 'node';
$view->human_name = 'Assessoria jurídica localizações';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view location directory';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'street' => 'street',
  'city' => 'city',
  'province' => 'province',
  'postal_code' => 'postal_code',
  'country' => 'country',
);
$handler->display->display_options['style_options']['default'] = 'city';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'street' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'city' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'province' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'postal_code' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'country' => array(
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
/* Rodapé: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
$handler->display->display_options['footer']['area']['content'] = '<a href="http://10.101.40.172/drupal/pt-br/assessoria_juridica/localizacoes"class="right">Volta</a>';
$handler->display->display_options['footer']['area']['format'] = 'html';
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Nome';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<p>[title]</p>';
/* Campo: Location: Street */
$handler->display->display_options['fields']['street']['id'] = 'street';
$handler->display->display_options['fields']['street']['table'] = 'location';
$handler->display->display_options['fields']['street']['field'] = 'street';
$handler->display->display_options['fields']['street']['label'] = 'Endereço';
/* Campo: Location: City */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'location';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['label'] = 'Cidade';
/* Campo: Location: Province */
$handler->display->display_options['fields']['province']['id'] = 'province';
$handler->display->display_options['fields']['province']['table'] = 'location';
$handler->display->display_options['fields']['province']['field'] = 'province';
$handler->display->display_options['fields']['province']['label'] = 'Estado';
/* Campo: Location: Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'location';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['label'] = 'CEP';
/* Campo: Location: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'location';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['exclude'] = TRUE;
/* Sort criterion: Conteúdo: Localização (field_ass_jur_localizacao) */
$handler->display->display_options['sorts']['field_ass_jur_localizacao_lid']['id'] = 'field_ass_jur_localizacao_lid';
$handler->display->display_options['sorts']['field_ass_jur_localizacao_lid']['table'] = 'field_data_field_ass_jur_localizacao';
$handler->display->display_options['sorts']['field_ass_jur_localizacao_lid']['field'] = 'field_ass_jur_localizacao_lid';
/* Contextual filter: Location: Province */
$handler->display->display_options['arguments']['province']['id'] = 'province';
$handler->display->display_options['arguments']['province']['table'] = 'location';
$handler->display->display_options['arguments']['province']['field'] = 'province';
$handler->display->display_options['arguments']['province']['default_action'] = 'summary';
$handler->display->display_options['arguments']['province']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['province']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['province']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['province']['title'] = '%2';
$handler->display->display_options['arguments']['province']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['province']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['province']['summary']['format'] = 'jump_menu_summary';
$handler->display->display_options['arguments']['province']['summary_options']['text'] = 'Ir';
$handler->display->display_options['arguments']['province']['summary_options']['choose'] = '- Escolher-';
$handler->display->display_options['arguments']['province']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['province']['break_phrase'] = 0;
/* Contextual filter: Location: City */
$handler->display->display_options['arguments']['city']['id'] = 'city';
$handler->display->display_options['arguments']['city']['table'] = 'location';
$handler->display->display_options['arguments']['city']['field'] = 'city';
$handler->display->display_options['arguments']['city']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['city']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['city']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['city']['title'] = '%3';
$handler->display->display_options['arguments']['city']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['city']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['city']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['city']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['city']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['city']['glossary'] = TRUE;
$handler->display->display_options['arguments']['city']['limit'] = '1';
/* Filter criterion: Conteúdo: Tipo */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'assessoria_juridica' => 'assessoria_juridica',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Conteúdo: Published or admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 1;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Assessoria jurídica localizações';
$handler->display->display_options['path'] = 'assessoria_juridica/localizacoes';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Assessoria jurídica localizações';
$handler->display->display_options['menu']['description'] = 'Assessoria jurídica localizações';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'menu-acesso-informacao-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['assessoria_juridica_localizacoes'] = array(
  t('Defaults'),
  t('more'),
  t('Apply'),
  t('Reiniciar'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('<a href="http://10.101.40.172/drupal/pt-br/assessoria_juridica/localizacoes"class="right">Volta</a>'),
  t('Nome'),
  t('<p>[title]</p>'),
  t('Endereço'),
  t('Cidade'),
  t('Estado'),
  t('CEP'),
  t('Country'),
  t('Tudo'),
  t('%2'),
  t('%3'),
  t('Page'),
  t('Assessoria jurídica localizações'),
);
