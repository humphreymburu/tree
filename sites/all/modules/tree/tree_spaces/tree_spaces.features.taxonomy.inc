<?php
/**
 * @file
 * tree_spaces.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tree_spaces_taxonomy_default_vocabularies() {
  return array(
    'tree_space_category' => array(
      'name' => 'Space Category',
      'machine_name' => 'tree_space_category',
      'description' => 'Categories for spaces',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
