<?php
/**
 * @file
 * tree_events.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tree_events_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Education',
    'description' => '<p>Education</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '28646833-d72e-4da1-8c9a-3f914b347bde',
    'vocabulary_machine_name' => 'event_category',
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '<p>Research</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => '635261ea-69af-4399-843b-95cda47024aa',
    'vocabulary_machine_name' => 'event_category',
  );
  $terms[] = array(
    'name' => 'Treatment',
    'description' => '<p>Treatment</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'a5711581-63e6-44ff-8e82-2b7012f87aef',
    'vocabulary_machine_name' => 'event_category',
  );
  return $terms;
}
