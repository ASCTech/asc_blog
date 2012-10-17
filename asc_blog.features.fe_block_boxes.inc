<?php
/**
 * @file
 * asc_blog.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function asc_blog_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blog Description';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'asc_blog_description';
  $fe_block_boxes->body = '<p><em>This is some descriptive text appearing at the top of the sidebar for the blog.</em></p>';

  $export['asc_blog_description'] = $fe_block_boxes;

  return $export;
}
