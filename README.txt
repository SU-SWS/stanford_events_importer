-- SUMMARY --

The Stanford Events Importer provides custom functionality for importing from events.stanford.edu XML feeds. A new feed API is available that is customized to work with this importer. It is available at: http://events.stanford.edu/xml/drupal/v2.php
(See http://events.stanford.edu/xml/ for more information on feeds.)

It gives the following:
* A content type "Stanford Event Importer", which allows you to create a content node of this type to import each feed you wish
* A content type of "Stanford Event". Nodes of this type are created by the "Stanford Event Importer" nodes when using "Import".

The imported items are set to refresh once every 24 hours, and to update (rather than replace) existing nodes.

-- DEPENDENCIES --
* Chaos Tools (ctools)
* Date (date)
* Features (features)
* Feeds (feeds)
* Feeds Tamper (feeds_tamper)
* Feeds XPath Parser (feeds_xpathparser)
* Job Scheduler (job_scheduler)
* Link (link)
* Strongarm (strongarm)

-- TO USE --
* Enable the module and all dependencies
* Go to admin/people/permissions and give selected roles the following permissions:
** Import Stanford Event Importer feeds
** Stanford Event: Create new content
** Stanford Event Importer: Create new content
* Create a new node of the type "Stanford Event Importer". Give it a title (eg, "Featured Events") and choose either a Category or an Organization
** Full documentation of the Stanford Events Drupal Feed Service is available at http://events.stanford.edu/xml/drupal/
* Your events will be imported
* You can set refresh rate and other options at admin/build/feeds/edit/stanford_event_importer (requires enabling the Feeds UI module)
* You must set up an individual feed node for each Category or Organization feed you would like to import

-- NOTES ON UPGRADING FROM THE 7.x-1.x BRANCH --
When upgrading from 7.x-1.x to 7.x-2.x:
* You must run update.php
* In 7.x-2.0-beta7 a features revert was placed into update.php. Please navigate to
admin/structure/features an ensure that this feature is in the "default" status.
* All existing event nodes are marked for update and will be on the next several
cron runs depending on the amount of existing content your site has.
** You can update and import all new content by going to each importer node and
manually running the import process.

See UPGRADE.txt for more information

-- NOTES ON UPGRADING FROM 7.x-2.0-beta4 AND EARLIER VERSIONS --
When upgrading from 7.x-2.0-beta4 and earlier:
* You must run update.php
* In 7.x-2.0-beta7 a features revert was placed into update.php. Please navigate to
admin/structure/features an ensure that this feature is in the "default" status.
* All existing event nodes are marked for update and will be on the next several
cron runs depending on the amount of existing content your site has.
** You can update and import all new content by going to each importer node and
manually running the import process.

See UPGRADE.txt for more information

-- AUTHORS --
John Bickar
Scott Stocker
Shea McKinney