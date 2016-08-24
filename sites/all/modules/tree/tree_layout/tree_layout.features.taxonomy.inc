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
    'newsletter' => array(
      'name' => 'Newsletter',
      'machine_name' => 'newsletter',
      'description' => 'Simplenews newsletter categories.',
      'hierarchy' => 0,
      'module' => 'simplenews',
      'weight' => 0,
    ),
  );
}
