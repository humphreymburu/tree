<?php
/**
 * @file
 * tree_pages.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tree_pages_taxonomy_default_vocabularies() {
  return array(
    'home' => array(
      'name' => 'Home',
      'machine_name' => 'home',
      'description' => 'Home related content',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
