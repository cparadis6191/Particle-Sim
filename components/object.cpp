#include "object.h"

object::object() {
	X_POS = new SDL_Rect;
	Y_POS = new SDL_Rect;
	X_VEL = 0;
	Y_VEL = 0;
	X_ACC = 0;
	Y_ACC = 0;
}

object::object(SDL_Rect * X_POS, int X_VEL, int X_ACC, SDL_Rect * Y_POS, int Y_VEL, int Y_ACC) {
	this->X_POS = X_POS;
	this->Y_POS = Y_POS;
	this->X_VEL = X_VEL;
	this->Y_VEL = Y_VEL;
	this->X_ACC = X_ACC;
	this->Y_ACC = Y_ACC;

}

object::~object() {

}

SDL_Rect * object::get_X_POS() { return X_POS; }
int object::get_X_VEL() { return X_VEL; }
int object::get_X_ACC() { return X_ACC; }

SDL_Rect * object::get_Y_POS() { return Y_POS; }
int object::get_Y_VEL() { return Y_VEL; }
int object::get_Y_ACC() { return Y_ACC; }

void object::update(physics *physics) {
	

}
