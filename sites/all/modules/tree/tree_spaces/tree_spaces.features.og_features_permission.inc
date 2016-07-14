<?php
/**
 * @file
 * tree_spaces.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function tree_spaces_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:tree_space:add user'
  $permissions['node:tree_space:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:administer og menu'
  $permissions['node:tree_space:administer og menu'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:administer panelizer og_group content'
  $permissions['node:tree_space:administer panelizer og_group content'] = array(
    'roles' => array(
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:approve and deny subscription'
  $permissions['node:tree_space:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:assign editor role'
  $permissions['node:tree_space:assign editor role'] = array(
    'roles' => array(
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:assign manager role'
  $permissions['node:tree_space:assign manager role'] = array(
    'roles' => array(
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:edit group features'
  $permissions['node:tree_space:edit group features'] = array(
    'roles' => array(
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:manage members'
  $permissions['node:tree_space:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:subscribe'
  $permissions['node:tree_space:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:tree_space:subscribe without approval'
  $permissions['node:tree_space:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:tree_space:update group'
  $permissions['node:tree_space:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'manager' => 'manager',
    ),
  );

  return $permissions;
}
