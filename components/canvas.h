#ifndef _CANVAS_H__
#define _CANVAS_H__

#include "object.h"
#include "SDL/SDL.h"

// Forward declaration of the object class
class object;

// Class representing the canvas that particles are drawn on
class canvas {
	public:
		canvas(int x_res, int y_res, int bits_per_pixel, int flags);
		~canvas();
		// Updates the entire canvas
		virtual void update();
		SDL_Surface * get_canvas();

	private:
		SDL_Surface * screen;
};

#endif
