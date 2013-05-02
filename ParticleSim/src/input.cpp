#include "input.h"


input::input() { 
	game_is_running = true;


	return;
}


input::~input() { return; }


void input::process_input() {
	while (SDL_PollEvent(&event)) {
		// If the user has X'ed out the window
		if (event.type == SDL_QUIT) {
			// Quit the program
			game_is_running = false;
		}
	}


	return;
}


bool input::game_running() { return game_is_running; }
