#include "testApp.h"

string uploadfile;

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
    ofxSSL::appendData = true;
}

//--------------------------------------------------------------
void testApp::draw(){
    ofDrawBitmapString(result, 10, 10);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    switch (key) {
        case '1':
            curl.setURL("http://www.openframeworks.cc");
            curl.perform();
            result = curl.getResponseBody();
            break;
        case '2':
            curl.setURL("https://test.authorize.net/");
            curl.perform();
            result = curl.getResponseBody();
            break;
        case '3':
            curl.setURL("https://www.google.com/speech-api/v1/recognize?xjerr=1&client=chromium&lang=en-US");

            // set form
            uploadfile = ofToDataPath("speechToText.flac",true);
            curl.addFormFile("file",uploadfile,"audio/x-flac");

            // set header
            curl.addHeader("Expect:");
            curl.addHeader("Content-Type: audio/x-flac; rate=16000");

            curl.perform();
            result = curl.getResponseBody();

            curl.clear();
            break;
        default:
            break;
    }
    
}
