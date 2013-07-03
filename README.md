ofxSSL (branch for oF 0.7.1 - 0.7.3)
======

openFrameworks addon wrapping libcURL with support for SSL requests using openSSL.

Tested on linux for 0.7.1 - 0.7.3 but without SSL at the moment ...

openSSL libraries are now included with openFrameworks by default.

Curl binaries for OSX are included in this package.

For linux, make sure you have the following package installed:

`apt-get install libcurl4-openssl-dev`

But binaries are still needed?! Added old ones (without ssl support) < TODO

BasicExample project makes three curl requests, the third of which is over SSL.  Watch the console for curl reporting.

