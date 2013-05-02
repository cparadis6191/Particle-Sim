#ifndef _INPUT_H__
#define _INPUT_H__

#include "object.h"


// Forward declaration
class object;

// Class dealing with input controls such as velocity, acceleration, number of particles
class input {
	public:
		input();
		~input();
		void process_input();

		bool game_running();

	private:
		SDL_Event event;
		bool game_is_running;
};

#endif
