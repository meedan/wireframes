<?php
/**
 * @file
 * wireframes_feature_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wireframes_feature_core_user_default_roles() {
  $roles = array();

  // Exported role: guest.
  $roles['guest'] = array(
    'name' => 'guest',
    'weight' => '4',
  );

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => '3',
  );

  return $roles;
}
