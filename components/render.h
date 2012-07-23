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
		// Renders a single particle
		virtual void update(object *particle, canvas *canvas);

	private:

};

#endif