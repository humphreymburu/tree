<?php
/**
 * @file
 * tree_researchers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tree_researchers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'researcher_profiles';
  $feeds_importer->config = array(
    'name' => 'Researcher Profiles',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'First name',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Last name',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Photo',
            'target' => 'field_photo',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Bio',
            'target' => 'field_bio',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Main Email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Phones',
            'target' => 'field_phones',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Organization',
            'target' => 'field_organizations:label',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Job Title',
            'target' => 'field_job_title:label',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Location',
            'target' => 'field_location:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'tree_contact',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['researcher_profiles'] = $feeds_importer;

  return $export;
}
