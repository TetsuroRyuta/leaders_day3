#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(180);
    x = 100;
    y = 100;
    xx = 20;
    yy = 20;
    
    mode = 0;
    ofSetRectMode(OF_RECTMODE_CENTER);

}

//--------------------------------------------------------------
void ofApp::update(){
    x = x + xx; // x += xx;
    y = y + yy;
    
    if (x < 100 || ofGetWidth()-100 < x){
        xx *= -1; // xx = xx * -1;
    }
    if (y < 100 || ofGetHeight()-100 < y){
        yy *= -1;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (mode%2 == 0){
        ofSetBackgroundColor(0,0,0);
    }
    if (mode%2 == 1){
        ofSetBackgroundColor(255,0,0);
    }
    
    
    ofBackground(0,0,0);
    ofSetColor(255,255,255);
    ofSetLineWidth(0.5);
    ofDrawLine(128,0,128,768);
    ofDrawLine(256,0,256,768);
    ofDrawLine(384,0,384,768);
    ofDrawLine(512,0,512,768);
    ofDrawLine(640,0,640,768);
    ofDrawLine(768,0,768,768);
    ofDrawLine(896,0,896,768);
    ofDrawLine(1024,0,1024,768);
    
    ofDrawLine(0,128,1024,128);
    ofDrawLine(0,256,1024,256);
    ofDrawLine(0,384,1024,384);
    ofDrawLine(0,512,1024,512);
    ofDrawLine(0,640,1024,640);
    
  
    ofDrawCircle( x, y, 100);
    
    
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    ofRotate(45);
    ofDrawRectangle(0, 0, 300, 300);
    
    

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'a'){
        xx *= 2; // xx = xx + 5;
        yy *= 2; // yy = yy + 5;
    }
    if (key == 'b'){
        xx /= 2;
        yy /= 2;
    }


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    mode++; //mode = mode + 1;
    

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
