<?php
/**
 * @file
 * wireframes_feature_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wireframes_feature_core_default_rules_configuration() {
  $items = array();
  $items['rules_determine_meedan_members'] = entity_import('rules_config', '{ "rules_determine_meedan_members" : {
      "LABEL" : "Determine Meedan members",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "meedan" ],
      "REQUIRES" : [ "meedan_openid", "rules" ],
      "ON" : [ "user_insert" ],
      "IF" : [
        { "meedan_openid_rules_user_has_authmap" : { "account" : [ "account" ] } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  return $items;
}
