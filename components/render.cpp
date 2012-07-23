#include "render.h"

void render::update(object *particle, canvas *surface) {
	SDL_BlitSurface(particle->get_resource(),
					particle->get_X_POS(),
					surface->get_canvas(),
					0	
					);

}
