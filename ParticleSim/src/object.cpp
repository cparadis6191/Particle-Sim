#include "object.h"
#include <stdint.h>


object::object(
				int height, int width,
				int X_POS, int Y_POS,
				int X_VEL, int Y_VEL,
				int X_ACC, int Y_ACC,
				double friction) {

	// Allocate memory for the coordinates of the sprite
	POS = new SDL_Rect;
	POS->x = X_POS;
	POS->y = Y_POS;
	POS->w = width;
	POS->h = height;

	// velocity is measured in pixels/second
	this->X_VEL = X_VEL;
	this->Y_VEL = Y_VEL;

	// acceleration is measured in pixels/second^2
	this->X_ACC = X_ACC;
	this->Y_ACC = Y_ACC;

	this->friction = friction;


	return;
}


object::~object() {
	free(POS);


	return;
}


SDL_Rect * object::get_POS() { return POS; }

// Public accessor functions
int object::get_X_POS(void) { return POS->x; } 
int object::get_Y_POS(void) { return POS->y; }

int object::get_X_VEL(void) { return X_VEL; }
int object::get_X_ACC(void) { return X_ACC; }

int object::get_Y_VEL(void) { return Y_VEL; }
int object::get_Y_ACC(void) { return Y_ACC; }

// Public modifier functions
void object::set_X_POS(int X_POS) { this->POS->x = X_POS; }
void object::set_Y_POS(int Y_POS) { this->POS->y = Y_POS; }

void object::set_X_VEL(int X_VEL) { this->X_VEL = X_VEL; }
void object::set_X_ACC(int X_ACC) { this->X_ACC = X_ACC; }

void object::set_Y_VEL(int Y_VEL) { this->Y_VEL = Y_VEL; }
void object::set_Y_ACC(int Y_ACC) { this->Y_ACC = Y_ACC; }

