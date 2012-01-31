-- SUMMARY --

The Stanford Events Importer provides custom functionality for importing from events.stanford.edu XML feeds. A new feed API is available that is customized to work with this importer. It is available at: http://events.stanford.edu/xml/drupal/
(See http://events.stanford.edu/xml/ for more information on feeds.)

It gives the following:
* A CCK content type "Stanford Event Importer", which allows you to create a content node of this type to import each feed you wish
* A CCK content type of "Stanford Event". Nodes of this type are created by the "Stanford Event Importer" nodes when using "Import".

The imported items are set to refresh once every 30 minutes, and not to update existing nodes. You can change these and other options at admin/build/feeds/edit/stanford_event_importer.

-- DEPENDENCIES --
* Calendar (calendar)
* Content Construction Kit (cck)
* Chaos Tools (ctools)
* Date (date)
* Email Field (email)
* Features (features)
* Link (link)
* XML Parser (xml_parser)
* Feed XPath Parser (feeds_xpathparser)
* File Field (filefield)
* Image Field (imagefield)
* Job Scheduler (job_scheduler)
* Feeds (feeds)

-- KNOWN ISSUES --
* In some circumstances, batch import or batch delete fails with an "access denied" message.
In this case, delete your browser cookies and try again. See http://www.open-craft.com/blog/beware-php-request
for more information

-- TODO --
* Repeating dates
* Date/Timezone errors on import. Dates seem to still import properly.

-- TO USE --
* Enable the module and all dependencies
* Go to admin/user/permissions and give selected roles the permission to view/edit/delete stanford_event content type nodes (and possibly fields if the content permissions module is enabled), plus permission to import feeds
* Create Content of type "Stanford Event Importer". Give it a title (eg, "Featured Events") and a feed URL (eg, http://events.stanford.edu/xml/drupal/feed.php?featured)
* Edit your newly created "Stanford Event Importer" content, click on "Import" to manually import this feed.
* Your events will be imported
* You can set refresh rate and other options at admin/build/feeds/edit/stanford_event_importer