<?php
/**
 * @file
 * tree_search.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function tree_search_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'tree_current_search';
  $item->label = 'Tree';
  $item->settings = array(
    'items' => array(
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => ' <p>Filter: <span class="facetapi-active">[facetapi_results:result-count] item</span> displayed</p>',
        'plural' => 1,
        'text_plural' => '<p>Filter: <span class="facetapi-active">[facetapi_results:result-count] items</span> displayed</p>',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'div',
        'css' => 1,
        'classes' => 'current-search-filter',
        'weight' => '-48',
      ),
      'selected_items' => array(
        'id' => 'active',
        'label' => 'Selected Items',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 0,
        'keys_link' => 1,
        'keys_param' => '',
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '1',
    ),
  );
  $export['tree_current_search'] = $item;

  return $export;
}
