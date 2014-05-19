<?php
/**
 * @file
 * hot_environments_live.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hot_environments_live_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_0';
  $strongarm->value = 'alec@kalamuna.com';
  $export['emaillog_0'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_1';
  $strongarm->value = 'alec@kalamuna.com';
  $export['emaillog_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_2';
  $strongarm->value = 'alec@kalamuna.com';
  $export['emaillog_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_3';
  $strongarm->value = 'alec@kalamuna.com';
  $export['emaillog_3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_4';
  $strongarm->value = '';
  $export['emaillog_4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_5';
  $strongarm->value = '';
  $export['emaillog_5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_6';
  $strongarm->value = '';
  $export['emaillog_6'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_7';
  $strongarm->value = '';
  $export['emaillog_7'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_debug_info';
  $strongarm->value = array(
    0 => array(
      'post' => 1,
      'backtrace' => 1,
    ),
    1 => array(
      'post' => 1,
      'backtrace' => 1,
    ),
    2 => array(
      'post' => 1,
      'backtrace' => 1,
    ),
    3 => array(
      'post' => 1,
      'backtrace' => 1,
    ),
  );
  $export['emaillog_debug_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_last_message';
  $strongarm->value = array(
    'message' => 'search_api_solr%type while indexing: !message in %function (line %line of %file).',
    'time' => 1378244878,
    'count' => 2,
  );
  $export['emaillog_last_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_legacy_subject';
  $strongarm->value = 0;
  $export['emaillog_legacy_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_max_consecutive_timespan';
  $strongarm->value = '60';
  $export['emaillog_max_consecutive_timespan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_max_similarity_level';
  $strongarm->value = '.9';
  $export['emaillog_max_similarity_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emaillog_max_similar_emails';
  $strongarm->value = '2';
  $export['emaillog_max_similar_emails'] = $strongarm;

  return $export;
}
