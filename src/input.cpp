#include "input.h"


input::input() { 
	keystate = SDL_GetKeyState(NULL);

	game_is_running = true;


	return;
}


input::~input() { return; }


void input::process_input() {
	while (SDL_PollEvent(&event)) {
		// If the user has X'ed out the window
		// http://www.libsdl.org/cgi/docwiki.fcg/SDL_Event
		switch (event.type) {
			case SDL_QUIT:
			// Quit the game
			game_is_running = false;

			// Handle keystrokes
			case SDL_KEYDOWN:
			switch(event.key.keysym.sym) {
				case SDLK_ESCAPE:
					// Quit the game
					game_is_running = false;
				default:
					break;
			}
		}
	}


	return;
}


bool input::game_running() { return game_is_running; }
