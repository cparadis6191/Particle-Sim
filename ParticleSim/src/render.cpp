#include <SDL/SDL.h>

#include "render.h"


render::render() {

}


render::~render() {

}


// Blit particle to surface
void render::update(object *particle, canvas *surface) {
	// Draw a rectangle on the screen
	SDL_FillRect(surface->get_resource(), particle->get_POS(), 0xFFFFFFFF);


	return;
}
