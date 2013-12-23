#include "testApp.h"

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
            
        default:
            break;
    }
    
}
