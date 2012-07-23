#ifndef _OBJECT_H__
#define _OBJECT_H__

#include "render.h"
#include "input.h"
#include "physics.h"
#include "SDL/SDL.h"

// Forward declarations
class render;

// Class representing a single particle
class object {
	public:
		virtual void update(physics *physics,
							render *render);

		SDL_Surface * get_resource();

		SDL_Rect * get_X_POS();
		int get_X_VEL();
		int get_X_ACC();

		SDL_Rect * get_Y_POS();
		int get_Y_VEL();
		int get_Y_ACC();

	private:
		SDL_Surface * particle;
		SDL_Rect * X_POS, * Y_POS;
		int X_VEL, Y_VEL;
		int X_ACC, Y_ACC;
};

#endif
