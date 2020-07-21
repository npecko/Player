#include "Player.h"

void Player::setup() {
	video.load("video.mp4");
	video.play();

	control.add(playpause.set("play/pause", false));
	control.add(volume.set("volume", 0.5, 0.0, 1.0));
	control.add(scrub.set("scrub", 0.0, 0.0, video.getTotalNumFrames()));

	gui.setup(control);
}

void Player::update() {
	video.update();

	video.setVolume(volume);

	if (playpause) {
		video.setPaused(false);
	}
	else {
		video.setPaused(true);
	}

	if (video.isPaused()) {
		video.setFrame(scrub);
	}
}

void Player::draw() {
	video.draw(0, 0);

	gui.draw();
}