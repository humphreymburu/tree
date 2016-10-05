<?php
/**
 * @file
 * tree_about.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tree_about_taxonomy_default_vocabularies() {
  return array(
    'profile_categories' => array(
      'name' => 'Profile Categories',
      'machine_name' => 'profile_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
