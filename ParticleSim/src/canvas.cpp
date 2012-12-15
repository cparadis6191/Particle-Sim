#include "canvas.h"


canvas::canvas() {
	SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(320, 240, 8, SDL_SWSURFACE);
}


// Initialize a window with the given parameters
canvas::canvas(int x_res, int y_res, int bits_per_pixel, int flags) {
	SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(x_res, y_res, bits_per_pixel, flags);
}


canvas::~canvas() {
	// Free the canvas
	SDL_FreeSurface(screen);

	// Quits SDL
	SDL_Quit();
}


// Returns a pointer to the screen resource
SDL_Surface * canvas::get_resource(void) {
	return screen;
}


void canvas::update(void) {
	// Draw things to the screen
	SDL_Flip(screen);

	// Clear the resource to objects don't linger
	SDL_FillRect(screen, NULL, (uint32_t) 0);
}
