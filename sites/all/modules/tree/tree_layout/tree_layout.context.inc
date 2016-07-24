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
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
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
          'weight' => '-9',
        ),
        'tree_layout-tree_layout_donate' => array(
          'module' => 'tree_layout',
          'delta' => 'tree_layout_donate',
          'region' => 'top_region',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Top Region Links');
  $export['top_region_links'] = $context;

  return $export;
}
