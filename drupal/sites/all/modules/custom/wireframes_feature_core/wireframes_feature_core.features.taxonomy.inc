<?php
/**
 * @file
 * wireframes_feature_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wireframes_feature_core_taxonomy_default_vocabularies() {
  return array(
    'project' => array(
      'name' => 'Project',
      'machine_name' => 'project',
      'description' => 'The project this wireframe/page belongs to.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
