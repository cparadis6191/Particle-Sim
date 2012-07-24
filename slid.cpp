#include <iostream>
#include "SDL/SDL.h"

#include "slid.h"

using namespace std;

int main(int argc, char *argv[]) {
	canvas * screen = new canvas(300, 300, 8, SDL_SWSURFACE);
	render * renderer = new render();
	object particle;

	SDL_Surface * const sprite = SDL_LoadBMP("./graphics/duck.bmp");

	screen->update();

	SDL_Delay(500);

	return 0;
}
