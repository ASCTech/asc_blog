<?php
/**
 * @file
 * asc_blog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function asc_blog_taxonomy_default_vocabularies() {
  return array(
    'blog_terms_1' => array(
      'name' => 'Blog Category',
      'machine_name' => 'blog_terms_1',
      'description' => 'Primary vocabulary for Blog',
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
