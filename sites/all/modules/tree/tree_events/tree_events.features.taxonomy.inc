<?php
/**
 * @file
 * tree_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tree_events_taxonomy_default_vocabularies() {
  return array(
    'tree_event_category' => array(
      'name' => 'Event Category',
      'machine_name' => 'tree_event_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
