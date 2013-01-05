#include <SDL/SDL.h>

#include <vector>
#include <time.h>
#include <stdlib.h>

#include "slid.h"


using namespace std;

int main(int argc, char*argv[]) {
	// Creates an object representing the screen
	canvas* screen = new canvas(640, 480, 32, SDL_HWSURFACE);
	render* renderer = new render();
	physics* phys = new physics(screen->get_screen_width(), screen->get_screen_height());



	srand(time(NULL));
	
	vector<object*> particles;


	for (int i = 0; i < atoi(argv[1]); i++) {
		particles.push_back(new object(rand() % 5 + 5, rand() % 5 + 5, rand() % 500, rand() % 500, rand() % 6 - 3, rand() % 6 - 3, rand() % 6 - 3, rand() %6 - 3, rand() % 5));

	}


	while (1) {
		for (vector<object*>::iterator particle = particles.begin(); particle != particles.end(); particle++) {
			phys->update(screen, *particle);

			// Draw each particle to the screen
			renderer->draw(screen, *particle);
		}

		screen->update();

		SDL_Delay(25);
	}


	// Free the resources
	delete screen;


	return 0;
}
