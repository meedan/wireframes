<?php
/**
 * @file
 * wireframes_feature_core.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function wireframes_feature_core_filter_default_formats() {
  $formats = array();

  // Exported format: Markdown.
  $formats['markdown'] = array(
    'format' => 'markdown',
    'name' => 'Markdown',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_markdown' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'ticket_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'url_pattern' => 'http://mantis.meedan.net/view.php?id=\\1',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
