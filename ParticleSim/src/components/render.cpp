#include <SDL/SDL.h>

#include "render.h"


render::render() {

}


render::~render() {

}


// Blit particle to surface
void render::update(object *particle, canvas *surface) {
	// Passing 0 for second arg draws whole sprite
	SDL_BlitSurface(particle->get_resource(), NULL,
					surface->get_resource(), particle->get_POS());
}
