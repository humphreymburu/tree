<?php
/**
 * @file
 * tree_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tree_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_links';
  $context->description = 'footer content';
  $context->tag = 'footer';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'footer_firstcolumn',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer_secondcolumn',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'footer_thirdcolumn',
          'weight' => '-9',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer_fourthcolumn',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('footer');
  t('footer content');
  $export['footer_links'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'links';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'themes' => 'themes',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        1 => 1,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-education-block_1' => array(
          'module' => 'views',
          'delta' => 'education-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['links'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = 'search functionality';
  $context->tag = 'search';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-test_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-test_search-page',
          'region' => 'featured',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  t('search functionality');
  $export['search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slider_banner';
  $context->description = 'Banner';
  $context->tag = 'Banner';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'Resources' => 'Resources',
        'Education' => 'Education',
        'Treatment' => 'Treatment',
        'Research' => 'Research',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-hero_slider-block' => array(
          'module' => 'views',
          'delta' => 'hero_slider-block',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner');
  $export['slider_banner'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'top_region_links';
  $context->description = 'Top Region Links';
  $context->tag = 'Top Region Links';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tree_layout-tree_layout_login' => array(
          'module' => 'tree_layout',
          'delta' => 'tree_layout_login',
          'region' => 'top_region',
          'weight' => '-18',
        ),
        'tree_layout-tree_layout_donate' => array(
          'module' => 'tree_layout',
          'delta' => 'tree_layout_donate',
          'region' => 'top_region',
          'weight' => '-17',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Top Region Links');
  $export['top_region_links'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'uw-search';
  $context->description = 'search facet';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'test_search:page' => 'test_search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-tCvT45PkzbaLXPQ8gyB1OHo0thg2Ib1h' => array(
          'module' => 'facetapi',
          'delta' => 'tCvT45PkzbaLXPQ8gyB1OHo0thg2Ib1h',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-lgt5rm3VHshRKawlakO2zH5iHPE2M882' => array(
          'module' => 'facetapi',
          'delta' => 'lgt5rm3VHshRKawlakO2zH5iHPE2M882',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-AiuRg65F7rRjYyhB1D1fgSGZOgH6CatI' => array(
          'module' => 'facetapi',
          'delta' => 'AiuRg65F7rRjYyhB1D1fgSGZOgH6CatI',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search facet');
  $export['uw-search'] = $context;

  return $export;
}
