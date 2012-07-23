#include "object.h"

SDL_Surface * object::get_resource() { return particle; }

SDL_Rect * object::get_X_POS() { return X_POS; }
int object::get_X_VEL() { return X_VEL; }
int object::get_X_ACC() { return X_ACC; }

SDL_Rect * object::get_Y_POS() { return Y_POS; }
int object::get_Y_VEL() { return Y_VEL; }
int object::get_Y_ACC() { return Y_ACC; }
