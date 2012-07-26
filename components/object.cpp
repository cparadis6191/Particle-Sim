#include "object.h"

object::object(char * resource_name, SDL_Rect * X_POS, int X_VEL, int X_ACC, SDL_Rect * Y_POS, int Y_VEL, int Y_ACC) {


	this->sprite = SDL_LoadBMP(resource_name);
	this->X_POS = X_POS;
	this->Y_POS = Y_POS;
	this->X_VEL = X_VEL;
	this->Y_VEL = Y_VEL;
	this->X_ACC = X_ACC;
	this->Y_ACC = Y_ACC;

}

object::~object() {
	SDL_FreeSurface(sprite);
}


SDL_Surface * object::get_resource() { return sprite; }
SDL_Rect * object::get_X_POS() { return X_POS; }
int object::get_X_VEL() { return X_VEL; }
int object::get_X_ACC() { return X_ACC; }

SDL_Rect * object::get_Y_POS() { return Y_POS; }
int object::get_Y_VEL() { return Y_VEL; }
int object::get_Y_ACC() { return Y_ACC; }

void object::update(physics *physics) {
	
}
