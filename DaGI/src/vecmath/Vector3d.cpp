/*
 * Vector3d.cpp
 *
 *  Created on: Apr 27, 2012
 *      Author: karsten
 */

#include "Vector3d.hpp"
#include <../math.hpp>

namespace vecmath {

Vector3d::Vector3d() :
		Tuple3d() {
}

Vector3d::Vector3d(double x, double y, double z) :
		Tuple3d(x, y, z) {
}

Vector3d::Vector3d(const Tuple3d& t) :
		Tuple3d(t) {
}

Vector3d::~Vector3d() {
}

double Vector3d::length() const {
	return sqrt(lengthSquared());
}

double Vector3d::lengthSquared() const {
	return x * x + y * y + z * z;
}

void Vector3d::normalize() {
	double length(length());
	x /= length;
	y /= length;
	z /= length;
}

static Vector3d Vector3d::cross(const Vector3d& v1, const Vector3d& v2) {
	return Vector3d(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z,
			v1.x * v2.y - v1.y * v2.x);
}

static double Vector3d::dot(const Vector3d& v1, const Vector3d& v2) {
	return v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;
}

void Vector3d::cross(const Vector3d& v) {
	x = y * v.z - z * v.y;
	y = z * v.x - x * v.z;
	z = x * v.y - y * v.x;
}

double Vector3d::dot(const Vector3d& v) const {
	return x*v.x + y*v.y + z*v.z;
}

}

