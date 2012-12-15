#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <SDL/SDL.h>

#include "slid.h"


using namespace std;

int main(int argc, char *argv[]) {
	// Creates an object representing the screen
	canvas * screen = new canvas(320, 240, 8, SDL_SWSURFACE);
	render * renderer = new render();
	physics * phys = new physics();

	object * particle = new object("./graphics/particle.bmp", 0, 0, 1, 0, 0, 1);
	object * particle1 = new object("./graphics/particle.bmp", 0, 0, 2, 0, 0, 2);
	object * particle2 = new object("./graphics/particle.bmp", 0, 0, 3, 0, 0, 3);
	object * particle3 = new object("./graphics/particle.bmp", 0, 0, 4, 0, 0, 2);
	object * particle4 = new object("./graphics/particle.bmp", 0, 0, 5, 0, 0, 2);


	while (1) {
		phys->update(particle);
		phys->update(particle1);
		phys->update(particle2);
		phys->update(particle3);
		phys->update(particle4);

		// Draw each particle to the screen
		renderer->update(particle, screen);
		renderer->update(particle1, screen);
		renderer->update(particle2, screen);
		renderer->update(particle3, screen);
		renderer->update(particle4, screen);


		screen->update();


		SDL_Delay(10);
	}

	// Free the resources
	delete particle;
	delete screen;


	return 0;
}
