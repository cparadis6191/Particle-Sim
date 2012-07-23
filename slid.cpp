#include <iostream>
#include "SDL/SDL.h"

#include "slid.h"

using namespace std;

int main(int argc, char *argv[]) {
	canvas * surface = new canvas(300, 300, 8, SDL_SWSURFACE);

	SDL_Surface * const sprite = SDL_LoadBMP("./graphics/duck.bmp");

	SDL_BlitSurface(sprite, 0, surface->get_canvas(), 0);
	SDL_Flip(surface->get_canvas());

	while(1)
	SDL_Delay(5);

	SDL_Quit();

	return 0;
}
