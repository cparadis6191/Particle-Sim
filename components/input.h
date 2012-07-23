#ifndef _CONTROLS_H__
#define _CONTROLS_H__

#include "object.h"

// Forward declarations
class object;

// Class dealing with input controls such as velocity, acceleration, number of particles
class controls {
	public:
		virtual void update(object *particle);

	private:
};

#endif
