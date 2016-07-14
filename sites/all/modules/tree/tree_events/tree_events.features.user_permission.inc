<?php
/**
 * @file
 * tree_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tree_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use search_api_autocomplete for search_api_views_tree_events'.
  $permissions['use search_api_autocomplete for search_api_views_tree_events'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_tree_events',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
