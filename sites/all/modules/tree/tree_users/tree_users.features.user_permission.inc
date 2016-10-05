<?php
/**
 * @file
 * tree_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tree_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access mollom statistics'.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access tools'.
  $permissions['access tools'] = array(
    'name' => 'access tools',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'tools',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create about_tree content'.
  $permissions['create about_tree content'] = array(
    'name' => 'create about_tree content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create themes content'.
  $permissions['create themes content'] = array(
    'name' => 'create themes content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tree_document content'.
  $permissions['create tree_document content'] = array(
    'name' => 'create tree_document content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tree_event content'.
  $permissions['create tree_event content'] = array(
    'name' => 'create tree_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tree_news content'.
  $permissions['create tree_news content'] = array(
    'name' => 'create tree_news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tree_page content'.
  $permissions['create tree_page content'] = array(
    'name' => 'create tree_page content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create tree_researchers content'.
  $permissions['create tree_researchers content'] = array(
    'name' => 'create tree_researchers content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any about_tree content'.
  $permissions['delete any about_tree content'] = array(
    'name' => 'delete any about_tree content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any themes content'.
  $permissions['delete any themes content'] = array(
    'name' => 'delete any themes content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tree_document content'.
  $permissions['delete any tree_document content'] = array(
    'name' => 'delete any tree_document content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tree_event content'.
  $permissions['delete any tree_event content'] = array(
    'name' => 'delete any tree_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tree_news content'.
  $permissions['delete any tree_news content'] = array(
    'name' => 'delete any tree_news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tree_researchers content'.
  $permissions['delete any tree_researchers content'] = array(
    'name' => 'delete any tree_researchers content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own about_tree content'.
  $permissions['delete own about_tree content'] = array(
    'name' => 'delete own about_tree content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own themes content'.
  $permissions['delete own themes content'] = array(
    'name' => 'delete own themes content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tree_document content'.
  $permissions['delete own tree_document content'] = array(
    'name' => 'delete own tree_document content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tree_event content'.
  $permissions['delete own tree_event content'] = array(
    'name' => 'delete own tree_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tree_news content'.
  $permissions['delete own tree_news content'] = array(
    'name' => 'delete own tree_news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own tree_researchers content'.
  $permissions['delete own tree_researchers content'] = array(
    'name' => 'delete own tree_researchers content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any about_tree content'.
  $permissions['edit any about_tree content'] = array(
    'name' => 'edit any about_tree content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any themes content'.
  $permissions['edit any themes content'] = array(
    'name' => 'edit any themes content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tree_document content'.
  $permissions['edit any tree_document content'] = array(
    'name' => 'edit any tree_document content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tree_event content'.
  $permissions['edit any tree_event content'] = array(
    'name' => 'edit any tree_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tree_news content'.
  $permissions['edit any tree_news content'] = array(
    'name' => 'edit any tree_news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tree_profile profile'.
  $permissions['edit any tree_profile profile'] = array(
    'name' => 'edit any tree_profile profile',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any tree_researchers content'.
  $permissions['edit any tree_researchers content'] = array(
    'name' => 'edit any tree_researchers content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own about_tree content'.
  $permissions['edit own about_tree content'] = array(
    'name' => 'edit own about_tree content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own themes content'.
  $permissions['edit own themes content'] = array(
    'name' => 'edit own themes content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tree_document content'.
  $permissions['edit own tree_document content'] = array(
    'name' => 'edit own tree_document content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tree_event content'.
  $permissions['edit own tree_event content'] = array(
    'name' => 'edit own tree_event content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tree_news content'.
  $permissions['edit own tree_news content'] = array(
    'name' => 'edit own tree_news content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own tree_profile profile'.
  $permissions['edit own tree_profile profile'] = array(
    'name' => 'edit own tree_profile profile',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own tree_researchers content'.
  $permissions['edit own tree_researchers content'] = array(
    'name' => 'edit own tree_researchers content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in theme'.
  $permissions['edit terms in theme'] = array(
    'name' => 'edit terms in theme',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'report to mollom'.
  $permissions['report to mollom'] = array(
    'name' => 'report to mollom',
    'roles' => array(
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'mollom',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save draft'.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'save_draft',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format panopoly_html_text'.
  $permissions['use text format panopoly_html_text'] = array(
    'name' => 'use text format panopoly_html_text',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format panopoly_wysiwyg_text'.
  $permissions['use text format panopoly_wysiwyg_text'] = array(
    'name' => 'use text format panopoly_wysiwyg_text',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any tree_profile profile'.
  $permissions['view any tree_profile profile'] = array(
    'name' => 'view any tree_profile profile',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own tree_profile profile'.
  $permissions['view own tree_profile profile'] = array(
    'name' => 'view own tree_profile profile',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Editor' => 'Editor',
      'Manager' => 'Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
