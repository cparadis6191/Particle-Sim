#include "physics.h"


physics::physics(int w, int h) {
	rows = h;
	cols = w;

	collision_matrix = new int*[rows];

	for (int i = 0; i < rows; i++) {
		collision_matrix[i] = new int[cols];
	}


	return;
}


physics::~physics() {
	for (int i = 0; i < rows; i++) {
		delete collision_matrix[i];
	}

	delete collision_matrix;


	return;
}


void physics::update(canvas& screen, object& particle) {
	// Gravity in this case
	resolve_force(particle);

	// Update the particle's position
	resolve_position(particle);

	// Prevent the ball from leaving the screen for now
	resolve_collision(screen, particle);


	return;
}


void physics::resolve_position(object& particle) {
	// Update the particle position
	particle.get_POS()->x += particle.get_X_VEL();
	particle.get_POS()->y += particle.get_Y_VEL();


	return;
}


void physics::resolve_force(object& particle) {
	// Update the particle velocity 
	particle.set_X_VEL(particle.get_X_VEL() + particle.get_X_ACC());
	particle.set_Y_VEL(particle.get_Y_VEL() + particle.get_Y_ACC());


	return;
}


void physics::resolve_collision(canvas& screen, object& particle) {
	// Check for collision with walls
	// Account for particles of different sizes
	if (particle.get_X_POS() >= (screen.get_resource()->w - particle.get_POS()->w)) {
		particle.set_X_VEL(-particle.get_X_VEL());
		particle.get_POS()->x = (screen.get_resource()->w - particle.get_POS()->w);
	} else if (particle.get_POS()->x <= 0) {
		particle.set_X_VEL(-particle.get_X_VEL());
		particle.set_X_POS(0);
	}
	// Check for collision with ceilings and floors
	if (particle.get_Y_POS() >= (screen.get_resource()->h - particle.get_POS()->h)) {
		particle.set_Y_VEL(-particle.get_Y_VEL());
		particle.set_Y_POS((screen.get_resource()->h - particle.get_POS()->h));
	} else if (particle.get_POS()->y <= 0) {
		particle.set_Y_VEL(-particle.get_Y_VEL());
		particle.set_Y_POS(0);
	}


	return;
}
