#include <iostream>
#include <SDL/SDL.h>

#include "slid.h"


using namespace std;

int main(int argc, char *argv[]) {
	// Creates an object representing the screen
	canvas * screen = new canvas(320, 240, 8, SDL_SWSURFACE);
	render * renderer = new render();

	object * particle = new object("./graphics/particle.bmp", 0, 0, 0, 0, 0, 0);
	object * particle2 = new object("./graphics/particle.bmp", 10, 10, 0, 0, 0, 0);
	object * particle3 = new object("./graphics/particle.bmp", 40, 30, 0, 0, 0, 0);
	object * particle4 = new object("./graphics/particle.bmp", 50, 20, 0, 0, 0, 0);
	object * particle5 = new object("./graphics/particle.bmp", 60, 80, 0, 0, 0, 0);


	renderer->update(particle, screen);
	renderer->update(particle2, screen);
	renderer->update(particle3, screen);
	renderer->update(particle4, screen);
	renderer->update(particle5, screen);

	screen->update();


	SDL_Delay(500);


	// Free the resources
	delete particle;
	delete particle2;
	delete screen;


	return 0;
}
