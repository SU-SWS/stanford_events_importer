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
* Create a new node of the type "Stanford Event Importer". Give it a title (eg, "Featured Events") and a feed URL (eg, http://events.stanford.edu/xml/drupal/v2.php?featured)
** Full documentation of the Stanford Events Drupal Feed Service is available at http://events.stanford.edu/xml/drupal/
* Your events will be imported
* You can set refresh rate and other options at admin/build/feeds/edit/stanford_event_importer (requires enabling the Feeds UI module)