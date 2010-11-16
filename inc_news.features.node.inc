<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _inc_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News Item'),
      'module' => 'features',
      'description' => t('Official community news stories can be submitted by users with the "editor" role.  Such stories will appear on the home page and in the official news feed.  Each story should if possible have at least one picture for added interest, and should have location information if possible for aggregators.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
