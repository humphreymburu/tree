<?php
/**
 * @file
 * tree_users.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tree_users_taxonomy_default_vocabularies() {
  return array(
    'tree_job_title' => array(
      'name' => 'Profile Categories',
      'machine_name' => 'tree_job_title',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
