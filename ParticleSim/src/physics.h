#ifndef _PHYSICS_H__
#define _PHYSICS_H__

#include "object.h"
#include "canvas.h"


// Forward declaration
class canvas;

// Class dealing with physical properties of particles
class physics {
	public:
		virtual void update(canvas *screen, object *particle);

		void resolve_position(object *particle);
		void resolve_force(object *particle);
		void resolve_collision(canvas *screen, object *particle);

	private:
};

#endif
