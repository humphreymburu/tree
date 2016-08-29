<?php
/**
 * @file
 * tree_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tree_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tree_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tree_page_node_info() {
  $items = array(
    'themes' => array(
      'name' => t('Themes'),
      'base' => 'node_content',
      'description' => t('Content type like Treatment,Research and Education'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'tree_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use <em>pages</em> for static content and adverts, wiki pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}