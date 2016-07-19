<?php
/**
 * @file
 * tree_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tree_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
