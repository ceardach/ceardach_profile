<?php
/**
 * @file
 * ceardach_profile.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function ceardach_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer profile types
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: administer realname
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'realname',
  );

  // Exported permission: edit any blog_profile profile
  $permissions['edit any blog_profile profile'] = array(
    'name' => 'edit any blog_profile profile',
    'roles' => array(
      0 => 'administrator',
      1 => 'site manager',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own blog_profile profile
  $permissions['edit own blog_profile profile'] = array(
    'name' => 'edit own blog_profile profile',
    'roles' => array(
      0 => 'blogger',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any blog_profile profile
  $permissions['view any blog_profile profile'] = array(
    'name' => 'view any blog_profile profile',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own blog_profile profile
  $permissions['view own blog_profile profile'] = array(
    'name' => 'view own blog_profile profile',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
