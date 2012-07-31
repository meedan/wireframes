<?php
/**
 * @file
 * wireframes_feature_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wireframes_feature_core_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'pages';
  $view->description = '';
  $view->tag = 'wireframes';
  $view->base_table = 'node';
  $view->human_name = 'Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wireframes';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Asset */
  $handler->display->display_options['fields']['field_asset']['id'] = 'field_asset';
  $handler->display->display_options['fields']['field_asset']['table'] = 'field_data_field_asset';
  $handler->display->display_options['fields']['field_asset']['field'] = 'field_asset';
  $handler->display->display_options['fields']['field_asset']['label'] = '';
  $handler->display->display_options['fields']['field_asset']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asset']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asset']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asset']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asset']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asset']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asset']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asset']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asset']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asset']['type'] = 'lightbox2__lightbox__thumbnail__original';
  $handler->display->display_options['fields']['field_asset']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_asset']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_asset']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_asset']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_asset']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_asset']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_asset']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 1;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dummy/%';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Asset */
  $handler->display->display_options['fields']['field_asset']['id'] = 'field_asset';
  $handler->display->display_options['fields']['field_asset']['table'] = 'field_data_field_asset';
  $handler->display->display_options['fields']['field_asset']['field'] = 'field_asset';
  $handler->display->display_options['fields']['field_asset']['label'] = '';
  $handler->display->display_options['fields']['field_asset']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asset']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asset']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asset']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asset']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asset']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asset']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asset']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asset']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asset']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_asset']['type'] = 'lightbox2__lightbox__medium__original';
  $handler->display->display_options['fields']['field_asset']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_asset']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_asset']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_asset']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_asset']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_asset']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_asset']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $export['pages'] = $view;

  $view = new view;
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view']['view'] = 'pages';
  $handler->display->display_options['fields']['view']['display'] = 'page';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $handler->display->display_options['fields']['view']['query_aggregation'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'projects';
  $export['projects'] = $view;

  return $export;
}
