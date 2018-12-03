<?php 
$view = new view();
$view->name = 'arquivos_usage';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'file_managed';
$view->human_name = 'Arquivos usage';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Arquivos usage';
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
$handler->display->display_options['row_plugin'] = 'fields';
/* Campo: Arquivo: Nome */
$handler->display->display_options['fields']['filename']['id'] = 'filename';
$handler->display->display_options['fields']['filename']['table'] = 'file_managed';
$handler->display->display_options['fields']['filename']['field'] = 'filename';
$handler->display->display_options['fields']['filename']['label'] = '';
$handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
/* Campo: Arquivo: Arquivo UUID */
$handler->display->display_options['fields']['uuid']['id'] = 'uuid';
$handler->display->display_options['fields']['uuid']['table'] = 'file_managed';
$handler->display->display_options['fields']['uuid']['field'] = 'uuid';
/* Campo: Arquivo: Delete link */
$handler->display->display_options['fields']['delete']['id'] = 'delete';
$handler->display->display_options['fields']['delete']['table'] = 'file_managed';
$handler->display->display_options['fields']['delete']['field'] = 'delete';
/* Campo: Arquivo: Download link */
$handler->display->display_options['fields']['download']['id'] = 'download';
$handler->display->display_options['fields']['download']['table'] = 'file_managed';
$handler->display->display_options['fields']['download']['field'] = 'download';
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['node_usage']['id'] = 'node_usage';
$handler->display->display_options['fields']['node_usage']['table'] = 'views_entity_file';
$handler->display->display_options['fields']['node_usage']['field'] = 'node_usage';
$handler->display->display_options['fields']['node_usage']['label'] = 'File usage (node)';
/* Campo: Broken/missing handler */
$handler->display->display_options['fields']['term_usage']['id'] = 'term_usage';
$handler->display->display_options['fields']['term_usage']['table'] = 'views_entity_file';
$handler->display->display_options['fields']['term_usage']['field'] = 'term_usage';
$handler->display->display_options['fields']['term_usage']['label'] = 'File usage (term)';
/* Campo: Arquivo: Link */
$handler->display->display_options['fields']['link']['id'] = 'link';
$handler->display->display_options['fields']['link']['table'] = 'file_managed';
$handler->display->display_options['fields']['link']['field'] = 'link';
/* Campo: Arquivo: Media Folder */
$handler->display->display_options['fields']['field_folder']['id'] = 'field_folder';
$handler->display->display_options['fields']['field_folder']['table'] = 'field_data_field_folder';
$handler->display->display_options['fields']['field_folder']['field'] = 'field_folder';
$handler->display->display_options['fields']['field_folder']['type'] = 'i18n_taxonomy_term_reference_link';
/* Campo: Arquivo: Mime type */
$handler->display->display_options['fields']['filemime']['id'] = 'filemime';
$handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
$handler->display->display_options['fields']['filemime']['field'] = 'filemime';
/* Campo: Arquivo: Status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'file_managed';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Campo: Arquivo: Tamanho */
$handler->display->display_options['fields']['filesize']['id'] = 'filesize';
$handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
$handler->display->display_options['fields']['filesize']['field'] = 'filesize';
/* Campo: Arquivo: Tipo */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'file_managed';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['machine_name'] = 0;
/* Campo: Arquivo: Usage link */
$handler->display->display_options['fields']['usage']['id'] = 'usage';
$handler->display->display_options['fields']['usage']['table'] = 'file_managed';
$handler->display->display_options['fields']['usage']['field'] = 'usage';
/* Filter criterion: Arquivo: Tipo */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'file_managed';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'document' => 'document',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'arquivos-usage';
$translatables['arquivos_usage'] = array(
  t('Master'),
  t('Arquivos usage'),
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
  t('Arquivo UUID'),
  t('Delete link'),
  t('Download link'),
  t('File usage (node)'),
  t('File usage (term)'),
  t('Link'),
  t('Media Folder'),
  t('Mime type'),
  t('Status'),
  t('Tamanho'),
  t('Tipo'),
  t('Usage link'),
  t('Page'),
);
