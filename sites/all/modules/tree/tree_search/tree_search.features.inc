<?php
/**
 * @file
 * tree_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tree_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tree_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function tree_search_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "database",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_tags:parents_all" : "field_tags:parents_all",
              "field_type_of_theme:parents_all" : "field_type_of_theme:parents_all",
              "field_event_category:parents_all" : "field_event_category:parents_all",
              "field_type_of_news:parents_all" : "field_type_of_news:parents_all",
              "field_home_page:parents_all" : "field_home_page:parents_all",
              "field_type_of_space:parents_all" : "field_type_of_space:parents_all",
              "field_document_type:parents_all" : "field_document_type:parents_all"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "type" : true,
              "title" : true,
              "title_field" : true,
              "field_information" : true,
              "body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "type" : true,
              "title" : true,
              "title_field" : true,
              "field_information" : true,
              "body:value" : true
            },
            "title" : 1,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_information" : true,
              "body:value" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "field_information" : true,
              "body:value" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      },
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "status" : { "type" : "integer" },
        "promote" : { "type" : "boolean" },
        "sticky" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "title_field" : { "type" : "text", "boost" : "5.0" },
        "field_type_of_theme" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_event_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_type_of_news" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_information" : { "type" : "text", "boost" : "5.0" },
        "field_type_of_space" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_document_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_publication_date" : { "type" : "date" },
        "search_api_language" : { "type" : "string" },
        "body:value" : { "type" : "text", "boost" : "5.0" },
        "body:format" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function tree_search_default_search_api_server() {
  $items = array();
  $items['database'] = entity_import('search_api_server', '{
    "name" : "Database",
    "machine_name" : "database",
    "description" : "Database Service",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "autocomplete" : { "suggest_suffix" : 1, "suggest_words" : 1 },
      "indexes" : { "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_default_node_index",
            "column" : "sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title_field" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "field_type_of_theme" : {
            "table" : "search_api_db_default_node_index_field_type_of_theme",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_event_category" : {
            "table" : "search_api_db_default_node_index_field_event_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_type_of_news" : {
            "table" : "search_api_db_default_node_index_field_type_of_news",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_information" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "field_type_of_space" : {
            "table" : "search_api_db_default_node_index_field_type_of_space",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_document_type" : {
            "table" : "search_api_db_default_node_index_field_document_type",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_publication_date" : {
            "table" : "search_api_db_default_node_index",
            "column" : "field_publication_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "language",
            "type" : "string",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_default_node_index",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_default_node_index",
            "column" : "status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "body:format" : {
            "table" : "search_api_db_default_node_index",
            "column" : "body_format",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  $items['tree_solr'] = entity_import('search_api_server', '{
    "name" : "Solr",
    "machine_name" : "tree_solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "",
      "port" : "8080",
      "path" : "\\/solr\\/dev1",
      "http_user" : "root",
      "http_pass" : "root",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "AUTO"
    },
    "enabled" : "0"
  }');
  return $items;
}
