<?php 
$view = new view();
$view->name = 'glossary';
$view->description = 'A list of all content, by letter.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Glossary';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 36;
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'name' => 'name',
  'changed' => 'changed',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'name' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'changed' => array(
    'sortable' => 1,
    'separator' => '',
  ),
);
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Campo: Usuário: Nome */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Autor';
/* Campo: Conteúdo: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Última atualização';
$handler->display->display_options['fields']['changed']['date_format'] = 'large';
/* Contextual filter: Conteúdo: Título */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['default_action'] = 'default';
$handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['title']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['title']['glossary'] = TRUE;
$handler->display->display_options['arguments']['title']['limit'] = '1';
$handler->display->display_options['arguments']['title']['case'] = 'upper';
$handler->display->display_options['arguments']['title']['path_case'] = 'lower';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'glossary';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Glossary';
$handler->display->display_options['menu']['weight'] = '0';

/* Display: Attachment */
$handler = $view->new_display('attachment', 'Attachment', 'attachment');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Conteúdo: Título */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['default_action'] = 'summary';
$handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['title']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
$handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
$handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
$handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['title']['glossary'] = TRUE;
$handler->display->display_options['arguments']['title']['limit'] = '1';
$handler->display->display_options['arguments']['title']['case'] = 'upper';
$handler->display->display_options['arguments']['title']['path_case'] = 'lower';
$handler->display->display_options['displays'] = array(
  'default' => 'default',
  'page' => 'page',
);
$handler->display->display_options['inherit_arguments'] = FALSE;
$translatables['glossary'] = array(
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
  t('Autor'),
  t('Última atualização'),
  t('Tudo'),
  t('Page'),
  t('Attachment'),
);
