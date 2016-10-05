<?php
/**
 * @file
 * tree_users.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tree_users_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Nairobi',
    'description' => '<p>Nairobi</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 2,
    'uuid' => '1d5f3cab-3998-44ff-8c93-5d1d2ab3c44f',
    'vocabulary_machine_name' => 'profile_categories',
  );
  $terms[] = array(
    'name' => 'Forgarty',
    'description' => '<p>Forgarty eCapacity</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 3,
    'uuid' => '1ed931e2-dcf8-4b32-af8b-a197d690b09f',
    'vocabulary_machine_name' => 'profile_categories',
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '<p>Research Collaborators</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 4,
    'uuid' => '41420b0d-b150-4c47-b9d8-b77f984ed761',
    'vocabulary_machine_name' => 'profile_categories',
  );
  $terms[] = array(
    'name' => 'Seattle',
    'description' => '<p>Seattle</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 5,
    'uuid' => '74de758a-e3cc-4add-9c95-62dd87743f00',
    'vocabulary_machine_name' => 'profile_categories',
  );
  $terms[] = array(
    'name' => 'UNITID',
    'description' => '<p>UNITID Public Health Management Fellowship</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 1,
    'uuid' => '872b1e10-0ce7-4070-b288-6ea1b2b6daf2',
    'vocabulary_machine_name' => 'profile_categories',
  );
  $terms[] = array(
    'name' => 'Washington',
    'description' => '<p>Washington</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 0,
    'uuid' => 'ae06e81a-ad04-4c23-b3d9-6b2ddfa98965',
    'vocabulary_machine_name' => 'profile_categories',
  );
  $terms[] = array(
    'name' => 'Trainees',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 6,
    'uuid' => 'cc9e557a-4e7f-45af-a944-a2ffc8730f24',
    'vocabulary_machine_name' => 'profile_categories',
  );
  $terms[] = array(
    'name' => 'Clinical',
    'description' => '<p>Clinical Management of HIV</p>',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => 7,
    'uuid' => 'ed258a2c-9336-4bd6-9b13-038bb0727ee3',
    'vocabulary_machine_name' => 'profile_categories',
  );
  return $terms;
}
