#include "physics.h"


void physics::update(object *particle) {
	// Update the particle's position
	resolve_position(particle);

	// Prevent the ball from leaving the screen for now
	resolve_collision(particle);

	// Gravity in this case
	resolve_force(particle);


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
	if (particle->get_POS()->x >= 319) {
		particle->set_X_VEL(-particle->get_X_VEL());
		particle->get_POS()->x = 319;
	} else if (particle->get_POS()->x <= 1) {
		particle->set_X_VEL(-particle->get_X_VEL());
		particle->get_POS()->x = 1;
	}
	// Check for collision with ceilings and floors
	if (particle->get_POS()->y >= 239) {
		particle->set_Y_VEL(-particle->get_Y_VEL());
		particle->get_POS()->y = 239;
	} else if (particle->get_POS()->y <= 1) {
		particle->set_Y_VEL(-particle->get_Y_VEL());
		particle->get_POS()->y = 1;
	}


	return;
}
