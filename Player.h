#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class Player : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	ofVideoPlayer video;

	ofxPanel gui;

	ofParameterGroup control;
	ofParameter<bool> playpause;
	ofParameter<float> volume;
	ofParameter<int> scrub;

};
