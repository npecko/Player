#include "ofMain.h"
#include "Player.h"

int main( ){
	ofSetupOpenGL(1280,720,OF_WINDOW);

	ofRunApp(new Player());
}
