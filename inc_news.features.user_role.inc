<?php

/**
 * Implementation of hook_user_default_roles().
 */
function inc_news_user_default_roles() {
  $roles = array();

  // Exported role: reporter
  $roles['reporter'] = array(
    'name' => 'reporter',
  );

  return $roles;
}
