#include <SDL/SDL.h>

#include <vector>
#include <time.h>
#include <stdlib.h>

#include "slid.h"


using namespace std;

int main(int argc, char *argv[]) {
	// Creates an object representing the screen
	canvas * screen = new canvas(320, 240, 32, SDL_HWSURFACE);
	render * renderer = new render();
	physics * phys = new physics();

	srand(time(NULL));
	
	vector<object *> particles;


	for (int i = 0; i < 1000; i++) {
		particles.push_back(new object(5, 5, 200*rand()/RAND_MAX, 200*rand()/RAND_MAX, 5*rand()/RAND_MAX, 5*rand()/RAND_MAX, 5*rand()/RAND_MAX, 5*rand()/RAND_MAX));

	}


	while (1) {
		for (vector<object *>::iterator particle = particles.begin(); particle != particles.end(); particle++) {
			phys->update(*particle);

			// Draw each particle to the screen
			renderer->update(*particle, screen);
		}

		screen->update();

		SDL_Delay(25);
	}


	// Free the resources
	delete screen;


	return 0;
}
