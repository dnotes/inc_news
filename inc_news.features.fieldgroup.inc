<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function inc_news_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_images
  $groups['news-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'news',
    'group_name' => 'group_images',
    'label' => 'Image Gallery',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_vertical_tab',
        'description' => '',
      ),
      'display' => array(
        'weight' => '0',
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
      ),
    ),
    'weight' => '0',
    'fields' => array(
      '0' => 'field_gallery',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Gallery');

  return $groups;
}
