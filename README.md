ofxSSL
======

openFrameworks addon wrapping libcURL with support for SSL requests using openSSL.

openSSL libraries are now included with openFrameworks by default.

Curl binaries for OSX are included in this package.

For linux, make sure you have the following package installed:

`apt-get install libcurl4-openssl-dev`

BasicExample project makes three curl requests, the second of which is over SSL.  The third demonstates file upload via form over SSL (to google's speech to text api).

