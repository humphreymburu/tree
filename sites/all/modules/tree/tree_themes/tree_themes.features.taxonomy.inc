<?php
/**
 * @file
 * tree_themes.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tree_themes_taxonomy_default_vocabularies() {
  return array(
    'theme' => array(
      'name' => 'Theme',
      'machine_name' => 'theme',
      'description' => 'Describes Tree,Research, Education contexts',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
