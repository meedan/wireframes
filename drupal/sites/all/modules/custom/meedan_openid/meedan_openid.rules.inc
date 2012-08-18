<?php

/**
 * Implements hook_rules_condition_info().
 */
function meedan_openid_rules_condition_info() {
  return array(
    'meedan_openid_rules_user_has_authmap' => array(
      'label' => t('User has OpenID'),
      'parameter' => array(
        'account' => array('type' => 'user', 'label' => t('User')),
      ),
      'group' => t('User'),
      'access callback' => 'rules_user_integration_access'
    ),
  );
}

function meedan_openid_rules_user_has_authmap($user, $settings) {
  $email = explode('@', $user->mail);
  return ($email[1] == variable_get('meedan_openid_domain', 'meedan.net') && meedan_openid_user_is_external($user));
}

