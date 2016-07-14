<?php
/**
 * @file
 * tree_layout.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tree_layout_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_education:Education
  $menu_links['main-menu_education:Education'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Education',
    'router_path' => 'Education',
    'link_title' => 'EDUCATION',
    'options' => array(
      'identifier' => 'main-menu_education:Education',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:home
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_research:Research
  $menu_links['main-menu_research:Research'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Research',
    'router_path' => 'Research',
    'link_title' => 'RESEARCH',
    'options' => array(
      'identifier' => 'main-menu_research:Research',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_treatment:Treatment
  $menu_links['main-menu_treatment:Treatment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Treatment',
    'router_path' => 'Treatment',
    'link_title' => 'TREATMENT',
    'options' => array(
      'identifier' => 'main-menu_treatment:Treatment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('EDUCATION');
  t('Home');
  t('RESEARCH');
  t('TREATMENT');


  return $menu_links;
}
