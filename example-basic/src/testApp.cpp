#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
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
            curl.setURL("http://217.115.71.165/v1.0.1/Trips/");
            curl.perform();
            result = curl.getResponseBody();
            break;
            
        case '3':
            curl.setURL("https://test.authorize.net/");
            curl.perform();
            result = curl.getResponseBody();
            break;
            
        default:
            break;
    }
    
}
