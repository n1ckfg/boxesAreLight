/*
Project Title:boxesAreLight
Description: perlin - noise box cliuds based on an idea in processing by @hamoid
https://github.com/hamoid/Fun-Programming/tree/master/processing/ideas/2015/01/boxesAreLight
©Daniel Buzzo 2020
dan@buzzo.com
http://buzzo.com
https://github.com/danbz
*/

#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);


    ofEasyCam cam;
    ofLight light;
    int row;
};
