<?php
/**
 * @file
 * wireframes_feature_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wireframes_feature_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wireframes_feature_core_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wireframes_feature_core_node_info() {
  $items = array(
    'wireframe' => array(
      'name' => t('Wireframe'),
      'base' => 'node_content',
      'description' => t('A single visual page deliverable.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
