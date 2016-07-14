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
        'text' => '<a treeef="/[facetapi_results:search-path]"><i class="fa fa-times-circle-o fa-lg"></i></a> Filter: <span class="facetapi-active">[facetapi_results:result-count] item</span> displayed',
        'plural' => 1,
        'text_plural' => '<a treeef="/[facetapi_results:search-path]"><i class="fa fa-times-circle-o fa-lg"></i></a> Filter: <span class="facetapi-active">[facetapi_results:result-count] items</span> displayed',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'div',
        'css' => 1,
        'classes' => 'current-search-filter',
        'weight' => '-48',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '1',
    ),
  );
  $export['tree_current_search'] = $item;

  return $export;
}
