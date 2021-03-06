#ifndef _RENDER_H__
#define _RENDER_H__

#include "object.h"
#include "canvas.h"


// Forward declarations
class canvas;
class object;

// Class to render the canvas and all particles (individually)
class render {
	public:
		render();
		virtual ~render();

		// Renders a single particle
		virtual void draw(canvas& screen, object& particle);

	private:

};

#endif
