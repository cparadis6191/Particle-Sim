#ifndef _OBJECT_H__
#define _OBJECT_H__

#include <string>

#include "input.h"
#include "physics.h"
#include "SDL/SDL.h"

// Class representing a single particle
class object {
	public:
		object(std::string resource_name,
				int X_POS, int Y_POS,
				int X_VEL, int Y_VEL,
				int X_ACC, int Y_ACC);

		~object();

		SDL_Surface * get_resource();

		SDL_Rect * get_POS();

		int get_X_VEL();
		int get_Y_VEL();

		int get_X_ACC();
		int get_Y_ACC();

	private:
		SDL_Surface * sprite;
		SDL_Rect * POS;
		int X_VEL, Y_VEL;
		int X_ACC, Y_ACC;
};

#endif
