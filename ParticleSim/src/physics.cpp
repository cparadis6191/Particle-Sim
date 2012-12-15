#include "physics.h"


void physics::update(object *particle) {
	// Check for collision with walls
	if (particle->get_POS()->x >= 310) {
		particle->set_X_VEL(-particle->get_X_VEL());
		particle->get_POS()->x = 310;
	} else if (particle->get_POS()->x <= 0) {
		particle->set_X_VEL(-particle->get_X_VEL());
		particle->get_POS()->x = 0;
	}
	// Check for collision with walls
	if (particle->get_POS()->y >= 230) {
		particle->set_Y_VEL(-particle->get_Y_VEL());
		particle->get_POS()->y = 230;
	} else if (particle->get_POS()->y <= 0) {
		particle->set_Y_VEL(-particle->get_Y_VEL());
		particle->get_POS()->y = 0;
	}

	// Update the particle velocity 
	particle->set_X_VEL(particle->get_X_VEL() + particle->get_X_ACC());
	particle->set_Y_VEL(particle->get_Y_VEL() + particle->get_Y_ACC());

	// Update the particle position
	particle->get_POS()->x += particle->get_X_VEL();
	particle->get_POS()->y += particle->get_Y_VEL();
}
