<?php
/**
 * @file
 * tree_document.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tree_document_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Posters',
    'description' => '<p><span>Posters and Presentations</span></p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '52e6ad48-7801-4ba5-a03f-767526d152c7',
    'vocabulary_machine_name' => 'tree_document_type',
  );
  $terms[] = array(
    'name' => 'Publications',
    'description' => '<p>Publications</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'cbe3ecec-77ec-4cf0-8dd5-4f08dafb6ad8',
    'vocabulary_machine_name' => 'tree_document_type',
  );
  return $terms;
}
