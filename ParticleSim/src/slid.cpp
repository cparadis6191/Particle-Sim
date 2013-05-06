#include <SDL/SDL.h>

#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

#include "slid.h"


using namespace std;


int main(int argc, char*argv[]) {
	const int FRAMES_PER_SECOND = 30;
	const int SKIP_TICKS = 1000 / FRAMES_PER_SECOND;

	// Seed the random number generator
	srand(time(NULL));
	

	// Creates an object representing the screen
	canvas screen(640, 480, 32, SDL_HWSURFACE);
	render renderer;
	physics phys(screen.get_screen_width(), screen.get_screen_height());
	input pc_input;

	vector<object*> particles;
	for (int i = 0; i < atoi(argv[1]); i++) {
		particles.push_back(new object(rand() % 5 + 5, rand() % 5 + 5, rand() % 640, rand() % 480, rand() % 6 - 3, rand() % 6 - 3, rand() % 6 - 3, rand() % 6 - 3, rand() % 5));

	}


	// SDL_GetTicks() returns the current number of milliseconds
	// that have elapsed since the system was started
	Uint32 next_game_tick = SDL_GetTicks();
	int sleep_time = 0;


	while (pc_input.game_running()) {

		// Update the game
		for (vector<object*>::iterator particle = particles.begin(); particle != particles.end(); particle++) {
			phys.update(screen, **particle);

			// Draw each particle to the screen
			renderer.draw(screen, **particle);
		}

		// Check for user input
		pc_input.process_input();
		// Draw to the screen
		screen.update();


		next_game_tick += SKIP_TICKS;
		sleep_time = next_game_tick - SDL_GetTicks();

		if (sleep_time >= 0) {
			SDL_Delay(sleep_time);
		}

		else {
			cout << "Frame Skipped" << endl;
			// Shit, we are running behind!
		}
	}


	return 0;
}



