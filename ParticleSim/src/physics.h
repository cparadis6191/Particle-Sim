#ifndef _PHYSICS_H__
#define _PHYSICS_H__

#include "canvas.h"
#include "object.h"


// Forward declarations
class canvas;
class object;

// Class dealing with physical properties of particles
class physics {
	public:
		// Default constructor
		physics(int w, int h);
		~physics();

		virtual void update(canvas* screen, object* particle);

		void resolve_position(object* particle);
		void resolve_force(object* particle);
		void resolve_collision(canvas* screen, object* particle);

	private:
		int** collision_matrix;
		int rows;
		int cols;
};

#endif
