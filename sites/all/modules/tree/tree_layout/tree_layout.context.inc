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
  $context->name = 'slider_banner';
  $context->description = 'Banner';
  $context->tag = 'Banner';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'home' => 'home',
        'research' => 'research',
        'education' => 'education',
        'treatment' => 'treatment',
        'resources' => 'resources',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-banner-block_1' => array(
          'module' => 'views',
          'delta' => 'banner-block_1',
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
          'weight' => '-10',
        ),
        'tree_layout-tree_layout_donate' => array(
          'module' => 'tree_layout',
          'delta' => 'tree_layout_donate',
          'region' => 'top_region',
          'weight' => '-9',
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
