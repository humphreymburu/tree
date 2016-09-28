<?php
/**
 * @file
 * tree_layout.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tree_layout_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Tree',
    'description' => '<p>Tree</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '3dc6c0d5-30dd-48b7-bcf2-fc0fdbb4d46b',
    'vocabulary_machine_name' => 'home',
  );
  return $terms;
}
