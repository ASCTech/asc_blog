<?php
/**
 * @file
 * asc_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'asc_blog_name';
  $strongarm->value = 'Blog';
  $export['asc_blog_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_titlelink_views_asc_blog-blog_block_large';
  $strongarm->value = array(
    'url' => 'blog',
    'display' => 1,
    'title' => 'Blog Page',
  );
  $export['block_titlelink_views_asc_blog-blog_block_large'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__asc_blog';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__asc_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_asc_blog';
  $strongarm->value = array();
  $export['menu_options_asc_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_asc_blog';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_asc_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_asc_blog';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_asc_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_asc_blog';
  $strongarm->value = '1';
  $export['node_preview_asc_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_asc_blog';
  $strongarm->value = 1;
  $export['node_submitted_asc_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_asc_blog_pattern';
  $strongarm->value = 'blog/[node:title]';
  $export['pathauto_node_asc_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_blog_terms_1_pattern';
  $strongarm->value = 'blog/filters/[term:tid]';
  $export['pathauto_taxonomy_term_blog_terms_1_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_blog_terms_2_pattern';
  $strongarm->value = 'blog/filter/[term:tid]';
  $export['pathauto_taxonomy_term_blog_terms_2_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_blog_terms_3_pattern';
  $strongarm->value = 'blog/filter/[term:tid]';
  $export['pathauto_taxonomy_term_blog_terms_3_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_blog_terms_1';
  $strongarm->value = array(
    'is_default' => FALSE,
    'type' => 'vocab',
    'xid' => 'blog_terms_1',
    'view_name' => 'asc_blog',
    'display' => 'blog_page',
    'status' => 1,
  );
  $export['tvi_vocab_blog_terms_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_blog_terms_2';
  $strongarm->value = (object) array(
    'is_default' => TRUE,
    'type' => 'vocab',
    'xid' => 'blog_terms_2',
    'view_name' => 'asc_blog',
    'display' => 'blog_page',
    'status' => 1,
  );
  $export['tvi_vocab_blog_terms_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_blog_terms_3';
  $strongarm->value = (object) array(
    'is_default' => TRUE,
    'type' => 'vocab',
    'xid' => 'blog_terms_3',
    'view_name' => 'asc_blog',
    'display' => 'blog_page',
    'status' => 1,
  );
  $export['tvi_vocab_blog_terms_3'] = $strongarm;

  return $export;
}
