#include "physics.h"


void physics::update(object *particle) {
	// Gravity in this case
	resolve_force(particle);

	// Update the particle's position
	resolve_position(particle);

	// Prevent the ball from leaving the screen for now
	resolve_collision(particle);


	return;
}


void physics::resolve_position(object *particle) {
	// Update the particle position
	particle->get_POS()->x += particle->get_X_VEL();
	particle->get_POS()->y += particle->get_Y_VEL();


	return;
}


void physics::resolve_force(object *particle) {
	// Update the particle velocity 
	particle->set_X_VEL(particle->get_X_VEL() + particle->get_X_ACC());
	particle->set_Y_VEL(particle->get_Y_VEL() + particle->get_Y_ACC());


	return;
}


void physics::resolve_collision(object *particle) {
	// Check for collision with walls
	// Account for particles of different sizes
	if (particle->get_POS()->x >= (320 - particle->get_POS()->w)) {
		particle->set_X_VEL(-particle->get_X_VEL());
		particle->get_POS()->x = (320 - particle->get_POS()->w);
	} else if (particle->get_POS()->x <= 0) {
		particle->set_X_VEL(-particle->get_X_VEL());
		particle->get_POS()->x = 0;
	}
	// Check for collision with ceilings and floors
	if (particle->get_POS()->y >= (240 - particle->get_POS()->h)) {
		particle->set_Y_VEL(-particle->get_Y_VEL());
		particle->get_POS()->y = (240 - particle->get_POS()->h);
	} else if (particle->get_POS()->y <= 0) {
		particle->set_Y_VEL(-particle->get_Y_VEL());
		particle->get_POS()->y = 0;
	}


	return;
}
