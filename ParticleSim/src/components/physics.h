#ifndef _PHYSICS_H__
#define _PHYSICS_H__

#include "object.h"

// Class dealing with collision detection and ?gravity?
class physics {
	public:
		virtual void update(object *particle);

	private:
};

#endif
