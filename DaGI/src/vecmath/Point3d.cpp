/*
 * Point3d.cpp
 *
 *  Created on: Apr 27, 2012
 *      Author: karsten
 */

#include "Point3d.hpp"

namespace vecmath {

Point3d::Point3d() :
		Tuple3d() {
}

Point3d::Point3d(double x, double y, double z) :
		Tuple3d(x, y, z) {
}

Point3d::Point3d(const Tuple3d& t) :
		Tuple3d(t) {
}

Point3d::~Point3d() {
}

}
