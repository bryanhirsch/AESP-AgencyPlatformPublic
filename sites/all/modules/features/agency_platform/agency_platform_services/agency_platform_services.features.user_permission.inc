<?php
/**
 * @file
 * agency_platform_services.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function agency_platform_services_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create services content'.
  $permissions['create services content'] = array(
    'name' => 'create services content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Power User' => 'Power User',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any services content'.
  $permissions['delete any services content'] = array(
    'name' => 'delete any services content',
    'roles' => array(
      'Editor' => 'Editor',
      'Power User' => 'Power User',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own services content'.
  $permissions['delete own services content'] = array(
    'name' => 'delete own services content',
    'roles' => array(
      'Editor' => 'Editor',
      'Power User' => 'Power User',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any services content'.
  $permissions['edit any services content'] = array(
    'name' => 'edit any services content',
    'roles' => array(
      'Editor' => 'Editor',
      'Power User' => 'Power User',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own services content'.
  $permissions['edit own services content'] = array(
    'name' => 'edit own services content',
    'roles' => array(
      'Contributor' => 'Contributor',
      'Editor' => 'Editor',
      'Power User' => 'Power User',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
