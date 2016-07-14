<?php
/**
 * @file
 * tree_spaces.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function tree_spaces_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:tree_space:editor'.
  $roles['node:tree_space:editor'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'tree_space',
    'name' => 'editor',
  );

  // Exported OG Role: 'node:tree_space:manager'.
  $roles['node:tree_space:manager'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'tree_space',
    'name' => 'manager',
  );

  return $roles;
}
