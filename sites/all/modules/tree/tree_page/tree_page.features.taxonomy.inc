<?php
/**
 * @file
 * tree_page.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tree_page_taxonomy_default_vocabularies() {
  return array(
    'education_categories' => array(
      'name' => 'Education Categories',
      'machine_name' => 'education_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
