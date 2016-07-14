<?php
/**
 * @file
 * tree_news.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function tree_news_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:tree_bundle:create tree_news content'
  $permissions['node:tree_bundle:create tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_bundle:delete any tree_news content'
  $permissions['node:tree_bundle:delete any tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_bundle:delete own tree_news content'
  $permissions['node:tree_bundle:delete own tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_bundle:update any tree_news content'
  $permissions['node:tree_bundle:update any tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_bundle:update own tree_news content'
  $permissions['node:tree_bundle:update own tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_operation:create tree_news content'
  $permissions['node:tree_operation:create tree_news content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_operation:delete any tree_news content'
  $permissions['node:tree_operation:delete any tree_news content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_operation:delete own tree_news content'
  $permissions['node:tree_operation:delete own tree_news content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_operation:update any tree_news content'
  $permissions['node:tree_operation:update any tree_news content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_operation:update own tree_news content'
  $permissions['node:tree_operation:update own tree_news content'] = array(
    'roles' => array(
      'bundle member' => 'bundle member',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_sector:create tree_news content'
  $permissions['node:tree_sector:create tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_sector:delete any tree_news content'
  $permissions['node:tree_sector:delete any tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_sector:delete own tree_news content'
  $permissions['node:tree_sector:delete own tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_sector:update any tree_news content'
  $permissions['node:tree_sector:update any tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_sector:update own tree_news content'
  $permissions['node:tree_sector:update own tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:create tree_news content'
  $permissions['node:tree_space:create tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:delete any tree_news content'
  $permissions['node:tree_space:delete any tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:delete own tree_news content'
  $permissions['node:tree_space:delete own tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:update any tree_news content'
  $permissions['node:tree_space:update any tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:tree_space:update own tree_news content'
  $permissions['node:tree_space:update own tree_news content'] = array(
    'roles' => array(
      'editor' => 'editor',
      'manager' => 'manager',
    ),
  );

  return $permissions;
}
