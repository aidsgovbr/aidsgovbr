<?php 
$view = new view();
$view->name = 'archive';
$view->description = 'Display a list of months that link to content for that month.';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Archive';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Monthly archive';
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
/* Sort criterion: Conteúdo: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Conteúdo: Created year + month */
$handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
$handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
$handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
$handler->display->display_options['arguments']['created_year_month']['default_action'] = 'summary';
$handler->display->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['created_year_month']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['created_year_month']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['created_year_month']['title'] = '%1';
$handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['created_year_month']['summary']['sort_order'] = 'desc';
$handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['created_year_month']['summary_options']['override'] = TRUE;
$handler->display->display_options['arguments']['created_year_month']['summary_options']['items_per_page'] = '30';
$handler->display->display_options['arguments']['created_year_month']['specify_validation'] = TRUE;
/* Filter criterion: Conteúdo: Publicado */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 0;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'archive';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Conteúdo: Created year + month */
$handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
$handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
$handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
$handler->display->display_options['arguments']['created_year_month']['default_action'] = 'summary';
$handler->display->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['created_year_month']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['created_year_month']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['created_year_month']['title'] = '%1';
$handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['created_year_month']['summary_options']['items_per_page'] = '30';
$handler->display->display_options['arguments']['created_year_month']['specify_validation'] = TRUE;
$translatables['archive'] = array(
  t('Master'),
  t('Monthly archive'),
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
  t('Tudo'),
  t('%1'),
  t('Page'),
  t('Block'),
);
