<?php
/**
 * @file
 * tree_page.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tree_page_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Fellowship',
    'description' => '<p>Projects</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '7d5d13a6-6fd3-466f-b0f6-b61ce2e1d738',
    'vocabulary_machine_name' => 'education_categories',
  );
  $terms[] = array(
    'name' => 'Rotation',
    'description' => '<p>Medical Rotation</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'd2d59a57-d83a-43ad-a1ae-d08ea5a61ae8',
    'vocabulary_machine_name' => 'education_categories',
  );
  $terms[] = array(
    'name' => 'Course',
    'description' => '<p>Learning Courses</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'd8152ddd-f84f-4776-adf9-680caa32fe4a',
    'vocabulary_machine_name' => 'education_categories',
  );
  return $terms;
}
