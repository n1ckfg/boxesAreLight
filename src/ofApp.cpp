/*
 Project Title:boxesAreLight
 Description: perlin - noise box cliuds based on an idea in processing by @hamoid
 https://github.com/hamoid/Fun-Programming/tree/master/processing/ideas/2015/01/boxesAreLight
 ©Daniel Buzzo 2020
 dan@buzzo.com
 http://buzzo.com
 https://github.com/danbz
 */

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableDepthTest();
    light.setPosition(200, -100, 500);
    cam.setPosition(5,5,30);
    ofSetBackgroundColor(220,220,255);
    row = 8;
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    light.enable();
    cam.begin();
    
    float seed = ofGetSystemTimeMillis()/100;
    float scale = 0.05;
    for (int x=0; x < row * 2; x++) {
        for (int y=0; y < row * 2; y++) {
            for (int z=0; z<row * 2; z++) {
                ofPushMatrix();
                ofTranslate(x, y, z);
                float n = ofNoise((x + seed) * scale, (y + seed) * scale, (z + seed) * scale);
                ofSetColor(ofNoise(y * 0.2, x * 0.2, z * 0.2) > 0.5 ? 255 : 80);
                ofDrawBox(n * row - 3);
                ofPopMatrix();
            }
        }
    }
    cam.end();
    light.disable();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

