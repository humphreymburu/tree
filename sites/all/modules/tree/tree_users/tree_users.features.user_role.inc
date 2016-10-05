<?php
/**
 * @file
 * tree_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tree_users_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
    'machine_name' => 'editor',
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 4,
    'machine_name' => 'manager',
  );

  return $roles;
}
