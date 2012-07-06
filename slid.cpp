#include <iostream>
#include "SDL/SDL.h"

#include "slid.h"

using namespace std;

int main(int argc, char *argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Surface * const screen = SDL_SetVideoMode(640, 480, 8, SDL_SWSURFACE);

	SDL_Surface * const sprite = SDL_LoadBMP("./graphics/duck.bmp");

	SDL_BlitSurface(sprite, 0, screen, 0);
	SDL_Flip(screen);

	while(1)
	SDL_Delay(5);

	SDL_Quit();

	return 0;
}
