#ifndef _OBJECT_H__
#define _OBJECT_H__

#include "input.h"
#include "physics.h"
#include "SDL/SDL.h"

// Class representing a single particle
class object {
	public:
		object(char * resource_name, SDL_Rect * X_POS, int X_POS, int X_ACC, SDL_Rect * Y_POS, int Y_VEL, int Y_ACC);
		~object();

		virtual void update(physics *physics);

		SDL_Surface * get_resource();

		SDL_Rect * get_X_POS();
		int get_X_VEL();
		int get_X_ACC();

		SDL_Rect * get_Y_POS();
		int get_Y_VEL();
		int get_Y_ACC();

	private:
		SDL_Surface * sprite;
		SDL_Rect * X_POS, * Y_POS;
		int X_VEL, Y_VEL;
		int X_ACC, Y_ACC;
};

#endif
