<?php
/**
 * @file
 * tree_themes.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tree_themes_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Education',
    'description' => '<p>Education</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '16aa9229-f75a-477c-ae20-6a94d099c7d1',
    'vocabulary_machine_name' => 'theme',
  );
  $terms[] = array(
    'name' => 'Treatment',
    'description' => '<p>Treatment</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'ab3eb64b-5837-42fb-8bed-aa22e724f50a',
    'vocabulary_machine_name' => 'theme',
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '<p>Research</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'c392ba38-db36-4744-9a4b-e6fba917eccb',
    'vocabulary_machine_name' => 'theme',
  );
  return $terms;
}
