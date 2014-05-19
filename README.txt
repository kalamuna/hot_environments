This is Kalamuna's module for aiding development and deployment by listing which
modules should be enabled and disabled on various environments.

It uses Zivtech's Habitat module (https://drupal.org/project/habitat) to manage
modules on different environments, and it is based on the bear_habitat set of
features in their Bear starter profile.

In order to use this project effectively, you must be able to detect in
settings.php which environment you're running on and set the Habitat variable
accordingly.

For a Pantheon site, you can create a snippet similar to the following:

  if (isset($_SERVER['PANTHEON_ENVIRONMENT'])) {
    if ($_SERVER['PANTHEON_ENVIRONMENT'] === 'live') {
      $conf['fetcher_environment'] = 'prod';
    }
    elseif ($_SERVER['PANTHEON_ENVIRONMENT'] === 'test') {
      $conf['fetcher_environment'] = 'test';
    }
    elseif ($_SERVER['PANTHEON_ENVIRONMENT'] === 'dev') {
      $conf['fetcher_environment'] = 'dev';
    }
  }
  else {
    $conf['fetcher_environment'] = 'local';
  }
