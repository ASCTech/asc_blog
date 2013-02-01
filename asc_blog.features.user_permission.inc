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
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any asc_blog content.
  $permissions['delete any asc_blog content'] = array(
    'name' => 'delete any asc_blog content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own asc_blog content.
  $permissions['delete own asc_blog content'] = array(
    'name' => 'delete own asc_blog content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any asc_blog content.
  $permissions['edit any asc_blog content'] = array(
    'name' => 'edit any asc_blog content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own asc_blog content.
  $permissions['edit own asc_blog content'] = array(
    'name' => 'edit own asc_blog content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Content Manager' => 'Content Manager',
      'Site Administrator' => 'Site Administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
