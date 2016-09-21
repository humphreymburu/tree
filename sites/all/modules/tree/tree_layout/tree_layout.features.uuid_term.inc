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
  $terms[] = array(
    'name' => 'Treatment',
    'description' => '<p>Treatment</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '728ea83b-ac09-4ec7-be63-c3de526714a7',
    'vocabulary_machine_name' => 'tree_space_category',
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '<p>Research</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'c6fb688a-cad7-43b1-860c-03fe10fe79c8',
    'vocabulary_machine_name' => 'tree_space_category',
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '<p>Education</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'ff496893-50b7-491b-a831-385e4b7d36b1',
    'vocabulary_machine_name' => 'tree_space_category',
  );
  return $terms;
}
