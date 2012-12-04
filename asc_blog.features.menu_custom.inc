<?php
/**
 * @file
 * asc_blog.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function asc_blog_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-useful-links.
  $menus['menu-useful-links'] = array(
    'menu_name' => 'menu-useful-links',
    'title' => 'Useful Links',
    'description' => 'Links for sidebar, usually associated with the blog.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links for sidebar, usually associated with the blog.');
  t('Useful Links');


  return $menus;
}
