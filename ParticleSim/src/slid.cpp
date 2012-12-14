#include <SDL/SDL.h>

#include "slid.h"


using namespace std;

int main(int argc, char *argv[]) {

	// Creates an object representing the screen
	canvas * screen = new canvas(320, 240, 8, SDL_SWSURFACE);
	render * renderer = new render();
	object * particle = new object("../graphics/particle.bmp", 0, 0, 0, 0, 0, 0);

	renderer->update(particle, screen);
	screen->update();


	SDL_Delay(500);

	return 0;
}
