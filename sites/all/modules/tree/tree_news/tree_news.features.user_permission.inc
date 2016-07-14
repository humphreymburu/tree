<?php
/**
 * @file
 * tree_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tree_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use search_api_autocomplete for search_api_views_tree_news'.
  $permissions['use search_api_autocomplete for search_api_views_tree_news'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_tree_news',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
