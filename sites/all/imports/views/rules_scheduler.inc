<?php 
$view = new view();
$view->name = 'rules_scheduler';
$view->description = 'Scheduled Rules components';
$view->tag = '';
$view->base_table = 'rules_scheduler';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer rules';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['tags']['first'] = '« início';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
$handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'tid' => 'tid',
  'config' => 'config',
  'date' => 'date',
  'identifier' => 'identifier',
  'nothing' => 'nothing',
);
$handler->display->display_options['style_options']['default'] = 'date';
$handler->display->display_options['style_options']['info'] = array(
  'tid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'config' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'date' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'identifier' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'nothing' => array(
    'align' => '',
    'separator' => '',
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['content'] = 'No tasks have been scheduled.';
$handler->display->display_options['empty']['area']['format'] = 'plain_text';
/* Campo: Rules scheduler: Tid */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'rules_scheduler';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
/* Campo: Rules scheduler: Component name */
$handler->display->display_options['fields']['config']['id'] = 'config';
$handler->display->display_options['fields']['config']['table'] = 'rules_scheduler';
$handler->display->display_options['fields']['config']['field'] = 'config';
$handler->display->display_options['fields']['config']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['config']['alter']['path'] = 'admin/config/workflow/rules/components/manage/[config]';
/* Campo: Rules scheduler: Scheduled date */
$handler->display->display_options['fields']['date']['id'] = 'date';
$handler->display->display_options['fields']['date']['table'] = 'rules_scheduler';
$handler->display->display_options['fields']['date']['field'] = 'date';
/* Campo: Rules scheduler: User provided identifier */
$handler->display->display_options['fields']['identifier']['id'] = 'identifier';
$handler->display->display_options['fields']['identifier']['table'] = 'rules_scheduler';
$handler->display->display_options['fields']['identifier']['field'] = 'identifier';
/* Campo: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Operações';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'apagar';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/config/workflow/rules/schedule/[tid]/delete';
$handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Delete this scheduled task';
/* Sort criterion: Rules scheduler: Scheduled date */
$handler->display->display_options['sorts']['date']['id'] = 'date';
$handler->display->display_options['sorts']['date']['table'] = 'rules_scheduler';
$handler->display->display_options['sorts']['date']['field'] = 'date';
/* Contextual filter: Rules scheduler: Component name */
$handler->display->display_options['arguments']['config']['id'] = 'config';
$handler->display->display_options['arguments']['config']['table'] = 'rules_scheduler';
$handler->display->display_options['arguments']['config']['field'] = 'config';
$handler->display->display_options['arguments']['config']['exception']['title'] = 'Tudo';
$handler->display->display_options['arguments']['config']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['config']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['config']['limit'] = '0';
/* Filter criterion: Rules scheduler: Component name */
$handler->display->display_options['filters']['config']['id'] = 'config';
$handler->display->display_options['filters']['config']['table'] = 'rules_scheduler';
$handler->display->display_options['filters']['config']['field'] = 'config';
$handler->display->display_options['filters']['config']['exposed'] = TRUE;
$handler->display->display_options['filters']['config']['expose']['operator_id'] = 'config_op';
$handler->display->display_options['filters']['config']['expose']['label'] = 'Component filter';
$handler->display->display_options['filters']['config']['expose']['operator'] = 'config_op';
$handler->display->display_options['filters']['config']['expose']['identifier'] = 'config';
$handler->display->display_options['filters']['config']['expose']['remember'] = TRUE;
$translatables['rules_scheduler'] = array(
  t('Defaults'),
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
  t('No tasks have been scheduled.'),
  t('Tid'),
  t('Component name'),
  t('Scheduled date'),
  t('User provided identifier'),
  t('Operações'),
  t('apagar'),
  t('Delete this scheduled task'),
  t('Tudo'),
  t('Component filter'),
);
