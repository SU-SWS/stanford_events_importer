#[Stanford Events Importer](https://github.com/SU-SWS/stanford_events_importer)
##### Version: 8.x-1.x-dev

Maintainers: [jbickar](https://github.com/jbickar), [sherakama](https://github.com/sherakama)

[Changelog.txt](CHANGELOG.txt)

**Note**: The Drupal 8 version is in very early developmental stages, and probably should not be used by anyone, anywhere.

The Stanford Events Importer provides custom functionality for importing from events.stanford.edu XML feeds. A feed API is available that is customized to work with this importer. It is available at: http://events.stanford.edu/xml/drupal/v2.php
(See [http://events.stanford.edu/xml/](http://events.stanford.edu/xml/) for more information on feeds.)

It gives the following:

* A content type of "Stanford Event". 

The imported items are set to refresh once every 24 hours, and to update (rather than replace) existing nodes.


External Dependencies
---
This module can be used as a standalone, but works best when integrated with events.stanford.edu.
Information on events.stanford.edu (event listings, category and organization information, etc.) is updated daily on the following schedule:
* 8am
* Noon
* 4pm
* 8pm

Troubleshooting
---

If you are experiencing issues with this module try reverting the feature first. If you are still experiencing issues try posting an issue on the GitHub issues page.

Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)
