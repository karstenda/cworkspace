/*
 * Tuple3d.cpp
 *
 *  Created on: Apr 22, 2012
 *      Author: Karsten Daemen
 */

#include "Tuple3d.hpp"


namespace vecmath {

Tuple3d::Tuple3d() :
	x(0), y(0), z(0) {
}

Tuple3d::Tuple3d(double x, double y, double z) :
		x(x), y(y), z(z) {
}

Tuple3d::Tuple3d(const Tuple3d& t) :
	x(t.x), y(t.y), z(t.z) {
}

Tuple3d::~Tuple3d() {}

}



