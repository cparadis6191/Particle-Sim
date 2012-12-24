#ifndef _OBJECT_H__
#define _OBJECT_H__

#include <SDL/SDL.h>

#include "physics.h"
#include "input.h"


// Forward declaration
class input;

// Class representing a single particle
class object {
	public:
		object(
				int height, int width,
				int X_POS, int Y_POS,
				int X_VEL, int Y_VEL,
				int X_ACC, int Y_ACC,
				double friction);


		~object();


		// Public accessors
		SDL_Rect * get_POS(void);

		int get_X_POS(void);
		int get_Y_POS(void);

		int get_X_VEL(void);
		int get_Y_VEL(void);

		int get_X_ACC(void);
		int get_Y_ACC(void);

		double get_friction(void);


		// Public modifiers
		void set_X_POS(int X_POS);
		void set_Y_POS(int Y_POS);

		void set_X_VEL(int X_VEL);
		void set_X_ACC(int X_ACC);

		void set_Y_VEL(int Y_VEL);
		void set_Y_ACC(int Y_ACC);

	private:
		SDL_Rect * POS;
		int X_VEL, Y_VEL;
		int X_ACC, Y_ACC;

		double friction;
};

#endif
