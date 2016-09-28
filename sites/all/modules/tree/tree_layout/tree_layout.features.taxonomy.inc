<?php
/**
 * @file
 * tree_layout.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tree_layout_taxonomy_default_vocabularies() {
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
