#ifndef _OBJECT_H__
#define _OBJECT_H__

#include <string>
#include <SDL/SDL.h>

#include "input.h"
#include "physics.h"


// Class representing a single particle
class object {
	public:
		object(
				int height, int width,
				int X_POS, int Y_POS,
				int X_VEL, int Y_VEL,
				int X_ACC, int Y_ACC);

		~object();

		SDL_Rect * get_POS(void);

		// Public accessors
		int get_X_VEL(void);
		int get_Y_VEL(void);

		int get_X_ACC(void);
		int get_Y_ACC(void);

		// Public modifiers
		void set_X_VEL(int X_VEL);
		void set_X_ACC(int X_ACC);

		void set_Y_VEL(int Y_VEL);
		void set_Y_ACC(int Y_ACC);

	private:
		SDL_Rect * POS;
		int X_VEL, Y_VEL;
		int X_ACC, Y_ACC;
};

#endif
