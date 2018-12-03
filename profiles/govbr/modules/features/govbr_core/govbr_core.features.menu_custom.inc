<?php
/**
 * @file
 * govbr_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function govbr_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-acesso-informacao.
  $menus['menu-acesso-informacao'] = array(
    'menu_name' => 'menu-acesso-informacao',
    'title' => 'Acesso à informação',
    'description' => '',
  );
  // Exported menu: menu-assuntos.
  $menus['menu-assuntos'] = array(
    'menu_name' => 'menu-assuntos',
    'title' => 'Assuntos',
    'description' => '',
  );
  // Exported menu: menu-centrais-conteudos.
  $menus['menu-centrais-conteudos'] = array(
    'menu_name' => 'menu-centrais-conteudos',
    'title' => 'Centrais de conteúdos',
    'description' => '',
  );
  // Exported menu: menu-destaque.
  $menus['menu-destaque'] = array(
    'menu_name' => 'menu-destaque',
    'title' => 'Menu de destaque',
    'description' => '',
  );
  // Exported menu: menu-relevancia.
  $menus['menu-relevancia'] = array(
    'menu_name' => 'menu-relevancia',
    'title' => 'Menu de relevância',
    'description' => '',
  );
  // Exported menu: menu-servicos.
  $menus['menu-servicos'] = array(
    'menu_name' => 'menu-servicos',
    'title' => 'Menu de serviços',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Acesso à informação');
  t('Assuntos');
  t('Centrais de conteúdos');
  t('Menu de destaque');
  t('Menu de relevância');
  t('Menu de serviços');


  return $menus;
}
