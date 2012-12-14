#include "object.h"

object::object(std::string resource_name,
				int X_POS, int Y_POS,
				int X_VEL, int Y_VEL,
				int X_ACC, int Y_ACC) {

	this->sprite = SDL_LoadBMP(resource_name.c_str());
	// x, y coordinate pair gives position of upper left corner of the object
	this->POS->x = X_POS;
	this->POS->y = Y_POS;
	this->POS->w = this->sprite->w;
	this->POS->h = this->sprite->h;

	// velocity is measured in pixels/second
	this->X_VEL = X_VEL;
	this->Y_VEL = Y_VEL;

	// acceleration is measured in pixels/second^2
	this->X_ACC = X_ACC;
	this->Y_ACC = Y_ACC;

}

object::~object() {
	SDL_FreeSurface(sprite);
}


// Public accessor functions
SDL_Surface * object::get_resource() { return sprite; }
SDL_Rect * object::get_POS() { return POS; }

int object::get_X_VEL() { return X_VEL; }
int object::get_X_ACC() { return X_ACC; }

int object::get_Y_VEL() { return Y_VEL; }
int object::get_Y_ACC() { return Y_ACC; }