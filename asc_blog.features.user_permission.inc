<?php
/**
 * @file
 * asc_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function asc_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: create asc_blog content.
  $permissions['create asc_blog content'] = array(
    'name' => 'create asc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any asc_blog content.
  $permissions['delete any asc_blog content'] = array(
    'name' => 'delete any asc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own asc_blog content.
  $permissions['delete own asc_blog content'] = array(
    'name' => 'delete own asc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any asc_blog content.
  $permissions['edit any asc_blog content'] = array(
    'name' => 'edit any asc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own asc_blog content.
  $permissions['edit own asc_blog content'] = array(
    'name' => 'edit own asc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
