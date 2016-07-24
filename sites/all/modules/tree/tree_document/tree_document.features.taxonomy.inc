<?php
/**
 * @file
 * tree_document.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tree_document_taxonomy_default_vocabularies() {
  return array(
    'tree_document_type' => array(
      'name' => 'Document Type',
      'machine_name' => 'tree_document_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
