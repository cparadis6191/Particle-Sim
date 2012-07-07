#ifdef __OBJECT_H_

#include "render.h"
#include "controls.h"
#include "physics.h"

class object {
	public:
		virtual void update(controls *controls,
							physics *physics,
							render *render);

	private:
		int X_POSITION, Y_POSITION;
		int X_VELOCITY, Y_VELOCITY;
		int X_ACCELERATION, Y_ACCELERATION;
};

#endif
