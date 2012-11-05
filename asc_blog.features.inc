<?php
/**
 * @file
 * asc_blog.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function asc_blog_block_class_features_default_class() {
  return array(
    0 => array(
      'module' => 'views',
      'delta' => 'asc_blog-blog_block_large',
      'css_classes' => 'feature-whole',
    ),
    1 => array(
      'module' => 'views',
      'delta' => 'asc_blog-blog_block_small',
      'css_classes' => 'feature-half',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function asc_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asc_blog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_custom_breadcrumbs_config_features_default_settings().
 */
function asc_blog_custom_breadcrumbs_config_features_default_settings() {
  $custom_breadcrumbs_configs = array();

  $custom_breadcrumbs_configs[] = array(
    'asc_blog-407855090' => array(
      'name' => 'Blog',
      'machine_name' => 'asc_blog',
      'titles' => 'Blog
[node:title]',
      'paths' => 'blog
[node:url:path]',
      'visibility_php' => '',
      'node_type' => 'asc_blog',
      'language' => '',
    ),
  );
  return $custom_breadcrumbs_configs;
}

/**
 * Implements hook_custom_breadcrumbs_views_config_features_default_settings().
 */
function asc_blog_custom_breadcrumbs_views_config_features_default_settings() {
  $custom_breadcrumbs_views_configs = array();

  $custom_breadcrumbs_views_configs[] = array(
    -1072821998 => array(
      'name' => 'directory',
      'machine_name' => 'asc-_blog-cb-views',
      'titles' => 'Blog',
      'paths' => 'blog',
      'visibility_php' => '',
      'views_path' => 'blog',
      'language' => '',
    ),
  );
  return $custom_breadcrumbs_views_configs;
}

/**
 * Implements hook_node_info().
 */
function asc_blog_node_info() {
  $items = array(
    'asc_blog' => array(
      'name' => t('Blog Entry'),
      'base' => 'node_content',
      'description' => t('Blog and updates for your organization.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
