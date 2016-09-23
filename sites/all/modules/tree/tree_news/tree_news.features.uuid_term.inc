<?php
/**
 * @file
 * tree_news.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tree_news_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Blog',
    'description' => 'Blog Posts',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0500471c-bdf9-4ab9-a6ee-9b045902a16c',
    'vocabulary_machine_name' => 'news_category',
  );
  $terms[] = array(
    'name' => 'Success Stories',
    'description' => 'Success Stories',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '309c10ba-d733-41f7-bf90-795d08b3fc1d',
    'vocabulary_machine_name' => 'news_category',
  );
  $terms[] = array(
    'name' => 'News',
    'description' => 'News',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e3c8defd-eb32-4a30-ab9f-8dcb0d072275',
    'vocabulary_machine_name' => 'news_category',
  );
  return $terms;
}
