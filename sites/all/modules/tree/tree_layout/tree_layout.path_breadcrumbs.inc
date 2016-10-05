<?php
/**
 * @file
 * tree_layout.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function tree_layout_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'about_pages';
  $path_breadcrumb->name = 'About_pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'About',
      1 => '%node',
    ),
    'paths' => array(
      0 => 'About',
      1 => '%node',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'about_tree' => 'about_tree',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -93;
  $export['about_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'about_single_page';
  $path_breadcrumb->name = 'about_single_page';
  $path_breadcrumb->path = 'About';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'About',
    ),
    'paths' => array(
      0 => 'About',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -92;
  $export['about_single_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'events_pages';
  $path_breadcrumb->name = 'events_pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News and Events',
      1 => 'Events',
    ),
    'paths' => array(
      0 => 'News_and_Events',
      1 => 'Events',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'tree_event' => 'tree_event',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -98;
  $export['events_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'main_event_page';
  $path_breadcrumb->name = 'main_event_page';
  $path_breadcrumb->path = 'Events';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News and Events',
      1 => 'Events',
    ),
    'paths' => array(
      0 => 'News_and_Events',
      1 => 'Events',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -97;
  $export['main_event_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'news_list';
  $path_breadcrumb->name = 'news-list';
  $path_breadcrumb->path = 'taxonomy/term/%term';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%term',
    ),
    'paths' => array(
      0 => '%term',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'term' => array(
        'position' => 2,
        'argument' => 'string',
        'settings' => array(
          'identifier' => 'list',
          'use_tail' => 0,
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => '',
          ),
          'context' => 'term',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -84;
  $export['news_list'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'news_list_page';
  $path_breadcrumb->name = 'news_list';
  $path_breadcrumb->path = 'News/list';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News and Events',
      1 => 'News',
    ),
    'paths' => array(
      0 => 'News_and_Events',
      1 => 'News/list',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -96;
  $export['news_list_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'news_list_page_clone';
  $path_breadcrumb->name = 'blog_list';
  $path_breadcrumb->path = 'Blog/list';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News and Events',
      1 => 'Blog',
    ),
    'paths' => array(
      0 => 'News_and_Events',
      1 => 'Blog/list',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -94;
  $export['news_list_page_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'news_list_page_clone_clone';
  $path_breadcrumb->name = 'stories_list';
  $path_breadcrumb->path = 'Stories/list';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News and Events',
      1 => 'Stories',
    ),
    'paths' => array(
      0 => 'News_and_Events',
      1 => 'Stories/list',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -95;
  $export['news_list_page_clone_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'profiles';
  $path_breadcrumb->name = 'profiles';
  $path_breadcrumb->path = 'staff';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'About',
      1 => 'Meet the Team',
    ),
    'paths' => array(
      0 => 'About',
      1 => 'staff',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -86;
  $export['profiles'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'research_page';
  $path_breadcrumb->name = 'research_page';
  $path_breadcrumb->path = 'researchers';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'About',
      1 => 'Researchers',
    ),
    'paths' => array(
      0 => 'About',
      1 => 'Researchers',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -90;
  $export['research_page'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'researcher_profiles_clone';
  $path_breadcrumb->name = 'Researcher_profiles';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'About',
      1 => 'Researchers',
      2 => '%node',
    ),
    'paths' => array(
      0 => 'About',
      1 => 'researchers',
      2 => '%node',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'tree_researchers' => 'tree_researchers',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -91;
  $export['researcher_profiles_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'resources_pages';
  $path_breadcrumb->name = 'news_page';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:field-type-of-news',
    ),
    'paths' => array(
      0 => '%node:field-type-of-news:name',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'tree_news' => 'tree_news',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -82;
  $export['resources_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'resources_pages_clone';
  $path_breadcrumb->name = 'documents_page';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:field-document-type',
    ),
    'paths' => array(
      0 => '%node:field-document-type/list',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'tree_document' => 'tree_document',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -87;
  $export['resources_pages_clone'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'success_stories_pages';
  $path_breadcrumb->name = 'success_stories_page';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News and Events',
      1 => '%node:field-type-of-news:name',
    ),
    'paths' => array(
      0 => 'News_and_Events',
      1 => '%node:field-type-of-news:name/list',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'tree_news' => 'tree_news',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -99;
  $export['success_stories_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'theme_pages';
  $path_breadcrumb->name = 'theme_pages';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '%node:field-type-of-theme',
    ),
    'paths' => array(
      0 => '%node:field-type-of-theme:name',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Node: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'themes' => 'themes',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -100;
  $export['theme_pages'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'user_id_page_profilea';
  $path_breadcrumb->name = 'user_id_page_profilea';
  $path_breadcrumb->path = 'user/%user';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'About',
      1 => 'Meet the Team',
      2 => '%user:profile-tree-profile:field-first-name',
    ),
    'paths' => array(
      0 => 'About',
      1 => 'staff',
      2 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'user' => array(
        'position' => 1,
        'argument' => 'entity_id:user',
        'settings' => array(
          'identifier' => 'User: ID',
        ),
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = -85;
  $export['user_id_page_profilea'] = $path_breadcrumb;

  return $export;
}
