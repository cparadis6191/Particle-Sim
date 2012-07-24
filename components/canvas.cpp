#include "canvas.h"

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

SDL_Surface * canvas::get_canvas() {
	return screen;
}

void canvas::update() {
	SDL_Flip(screen);
}
