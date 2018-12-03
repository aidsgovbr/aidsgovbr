<?php 
$view = new view();
$view->name = 'revisioning_content_summary';
$view->description = 'Summary of site content with revision counts and other details, filtered by state.';
$view->tag = 'Revisioning';
$view->base_table = 'node';
$view->human_name = 'Content summary';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Summary of site content';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => 2,
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 20;
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'type' => 'type',
  'changed' => 'changed',
  'name' => 'name',
  'number_of_revisions' => 'number_of_revisions',
  'state' => 'state',
  'view_node' => 'view_node',
  'edit_node' => 'edit_node',
  'timestamp' => 'timestamp',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'type' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'changed' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'name' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'number_of_revisions' => array(
    'sortable' => 0,
    'separator' => '',
  ),
  'state' => array(
    'sortable' => 0,
    'separator' => '',
  ),
  'view_node' => array(
    'separator' => '',
  ),
  'edit_node' => array(
    'separator' => '',
  ),
  'timestamp' => array(
    'separator' => '',
  ),
);
/* Cabeçalho: Global: Text area */
$handler->display->display_options['header']['text']['id'] = 'area';
$handler->display->display_options['header']['text']['table'] = 'views';
$handler->display->display_options['header']['text']['field'] = 'area';
$handler->display->display_options['header']['text']['content'] = 'Summary of site content';
$handler->display->display_options['header']['text']['format'] = 'filtered_html';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['text']['id'] = 'area';
$handler->display->display_options['empty']['text']['table'] = 'views';
$handler->display->display_options['empty']['text']['field'] = 'area';
$handler->display->display_options['empty']['text']['content'] = 'No content matches your query.';
$handler->display->display_options['empty']['text']['format'] = 'filtered_html';
/* Relationship: Conteúdo: Autor */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Campo: Conteúdo: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Campo: Conteúdo: Título */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/view';
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Campo: Conteúdo: Tipo */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Campo: Conteúdo: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Última atualização';
/* Campo: Usuário: Nome */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Autor';
/* Campo: Conteúdo: Revision moderation */
$handler->display->display_options['fields']['revision_moderation']['id'] = 'revision_moderation';
$handler->display->display_options['fields']['revision_moderation']['table'] = 'node';
$handler->display->display_options['fields']['revision_moderation']['field'] = 'revision_moderation';
$handler->display->display_options['fields']['revision_moderation']['label'] = 'Mod?';
$handler->display->display_options['fields']['revision_moderation']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['revision_moderation']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['revision_moderation']['alter']['path'] = 'node/[nid]/revisions';
$handler->display->display_options['fields']['revision_moderation']['empty'] = 'Não';
$handler->display->display_options['fields']['revision_moderation']['hide_empty'] = TRUE;
/* Campo: Conteúdo: Revisões */
$handler->display->display_options['fields']['number_of_revisions']['id'] = 'number_of_revisions';
$handler->display->display_options['fields']['number_of_revisions']['table'] = 'node';
$handler->display->display_options['fields']['number_of_revisions']['field'] = 'number_of_revisions';
$handler->display->display_options['fields']['number_of_revisions']['label'] = 'Rev.';
$handler->display->display_options['fields']['number_of_revisions']['alter']['alt'] = 'View revision summary';
/* Campo: Conteúdo: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'node';
$handler->display->display_options['fields']['state']['field'] = 'state';
/* Campo: Conteúdo: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
/* Campo: Conteúdo: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
/* Sort criterion: Conteúdo: Updated date */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
/* Filter criterion: Conteúdo: Revision moderation */
$handler->display->display_options['filters']['revision_moderation']['id'] = 'revision_moderation';
$handler->display->display_options['filters']['revision_moderation']['table'] = 'node';
$handler->display->display_options['filters']['revision_moderation']['field'] = 'revision_moderation';
$handler->display->display_options['filters']['revision_moderation']['exposed'] = TRUE;
$handler->display->display_options['filters']['revision_moderation']['expose']['operator_id'] = 'revision_moderation_op';
$handler->display->display_options['filters']['revision_moderation']['expose']['label'] = 'Moderated?';
$handler->display->display_options['filters']['revision_moderation']['expose']['operator'] = 'revision_moderation_op';
$handler->display->display_options['filters']['revision_moderation']['expose']['identifier'] = 'revision_moderation';
$handler->display->display_options['filters']['revision_moderation']['expose']['remember'] = TRUE;
/* Filter criterion: Conteúdo: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'node';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'content-summary';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Content summary';
$handler->display->display_options['menu']['description'] = 'Summary of site content';
$handler->display->display_options['menu']['weight'] = '-1';
$translatables['revisioning_content_summary'] = array(
  t('Defaults'),
  t('Summary of site content'),
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
  t('No content matches your query.'),
  t('author'),
  t('Nid'),
  t('Título'),
  t('Tipo'),
  t('Última atualização'),
  t('Autor'),
  t('Mod?'),
  t('Não'),
  t('Rev.'),
  t('View revision summary'),
  t('State'),
  t('Moderated?'),
  t('Page'),
);
