#ifndef _CANVAS_H__
#define _CANVAS_H__

#include <SDL/SDL.h>


// Class representing the canvas that particles are drawn on
class canvas {
	public:
		canvas();
		canvas(int x_res, int y_res, int bits_per_pixel, int flags);
		virtual ~canvas();

		// Updates the entire canvas
		virtual void update(void);

		// Get the screen resource
		SDL_Surface * get_resource(void);

	private:
		SDL_Surface * screen;
};

#endif
