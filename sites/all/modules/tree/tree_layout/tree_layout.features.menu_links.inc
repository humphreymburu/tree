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

  // Exported menu link: main-menu_about:About_us
  $menu_links['main-menu_about:About_us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'About_us',
    'router_path' => 'About_us',
    'link_title' => 'ABOUT',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:About_us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:contact_us
  $menu_links['main-menu_contact-us:contact_us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact_us',
    'router_path' => 'contact_us',
    'link_title' => 'CONTACT US',
    'options' => array(
      'identifier' => 'main-menu_contact-us:contact_us',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
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
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:Event
  $menu_links['main-menu_events:Event'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Event',
    'router_path' => 'Event',
    'link_title' => 'EVENTS',
    'options' => array(
      'attributes' => array(
        'title' => 'Events Links',
      ),
      'identifier' => 'main-menu_events:Event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
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
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_resources:Resources
  $menu_links['main-menu_resources:Resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Resources',
    'router_path' => 'Resources',
    'link_title' => 'RESOURCES',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources page',
      ),
      'identifier' => 'main-menu_resources:Resources',
    ),
    'module' => 'menu',
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
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('ABOUT');
  t('CONTACT US');
  t('EDUCATION');
  t('EVENTS');
  t('RESEARCH');
  t('RESOURCES');
  t('TREATMENT');


  return $menu_links;
}
