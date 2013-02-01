<?php
/**
 * @file
 * asc_blog.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asc_blog_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'asc_taxonomy_filter-blog_terms_1' => array(
      'delta' => 'blog_terms_1',
      'module' => 'asc_taxonomy_filter',
    ),
    'block-asc_blog_description' => array(
      'machine_name' => 'asc_blog_description',
      'module' => 'block',
    ),
    'menu-menu-useful-links' => array(
      'delta' => 'menu-useful-links',
      'module' => 'menu',
    ),
    'views-asc_blog-blog_block_list' => array(
      'delta' => 'asc_blog-blog_block_list',
      'module' => 'views',
    ),
    'views-asc_blog-blog_block_small' => array(
      'delta' => 'asc_blog-blog_block_small',
      'module' => 'views',
    ),
  );

  // q7
  $theme = array();

  $theme['asc_taxonomy_filter-blog_terms_1'] = array(
    'module' => 'asc_taxonomy_filter',
    'delta' => 'blog_terms_1',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-31',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['block-asc_blog_description'] = array(
    'module' => 'block',
    'theme' => 'q7',
    'status' => '1',
    'weight' => '-31',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'blog*',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'asc_blog_description',
  );

  $theme['menu-menu-useful-links'] = array(
    'module' => 'menu',
    'delta' => 'menu-useful-links',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-asc_blog-blog_block_list'] = array(
    'module' => 'views',
    'delta' => 'asc_blog-blog_block_list',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-asc_blog-blog_block_small'] = array(
    'module' => 'views',
    'delta' => 'asc_blog-blog_block_small',
    'theme' => 'q7',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['q7'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
