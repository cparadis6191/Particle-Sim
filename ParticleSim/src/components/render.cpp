#include "render.h"
#include "SDL/SDL.h"

render::render() {

}

render::~render() {

}

void render::update(object *particle, canvas *surface) {
	// Passing 0 for second arg draws whole sprite
	SDL_BlitSurface(particle->get_resource(), 0,
					surface->get_canvas(), 0);
}
