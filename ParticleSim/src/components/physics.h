#ifndef _PHYSICS_H__
#define _PHYSICS_H__

#include "object.h"


// Class dealing with physical properties of particles
class physics {
	public:
		virtual void update(object *particle);

	private:
};

#endif
