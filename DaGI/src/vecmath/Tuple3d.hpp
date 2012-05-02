/*
 * Tuple3d.hpp
 *
 *  Created on: Apr 22, 2012
 *      Author: Karsten Daemen
 */

#ifndef TUPLE3D_HPP_
#define TUPLE3D_HPP_

namespace vecmath {

/**
 * This class represents a tuple of 3 doubles.
 */

class Tuple3d {

private:

	double x;
	double y;
	double z;

public:

	/**
	 * Constructors and destructor
	 */

	virtual Tuple3d();
	virtual Tuple3d(double x, double y, double z);
	virtual Tuple3d(const Tuple3d& t);
	virtual ~Tuple3d();

	/**
	 * Getters and setters
	 */

	inline double getX() const {
		return x;
	}

	inline double getY() const {
		return y;
	}

	inline double getZ() const {
		return z;
	}

	inline void setX(double x) {
		this->x = x;
	}

	inline void setY(double y) {
		this->y = y;
	}

	inline void setZ(double z) {
		this->z = z;
	}

	/**
	 * Operator overloading
	 */

	inline Tuple3d& operator=(const Tuple3d& t) {
		x = t.x;
		y = t.y;
		z = t.z;
		return *this;
	}

	inline Tuple3d& operator+=(const Tuple3d& t) {
		x += t.x;
		y += t.y;
		z += t.z;
		return *this;
	}

	inline Tuple3d& operator-=(const Tuple3d& t) {
		x -= t.x;
		y -= t.y;
		z -= t.z;
		return *this;
	}

	inline Tuple3d& operator/=(const double d) {
		x /= d;
		y /= d;
		z /= d;
		return *this;
	}

	inline Tuple3d& operator*=(const double c) {
		x *= c;
		y *= c;
		z *= c;
		return *this;
	}

	inline const Tuple3d operator+(Tuple3d& t) const {
		return Tuple3d(*this) += t;
	}

	inline const Tuple3d& operator-(Tuple3d& t) const {
		return Tuple3d(*this) -= t;
	}

	inline Tuple3d operator/(const double d) const {
		return Tuple3d(*this) /= d;
	}

	inline Tuple3d operator*(const double c) const {
		return Tuple3d(*this) *= c;
	}

	inline bool operator==(const Tuple3d& t) const {
		return (x == t.x) && (y == t.y) && (z == t.z);
	}

	inline bool operator!=(const Tuple3d& t) const {
		return (x != t.x) ||  (y != t.y) || (z != t.z);
	}
};

}

#endif /* TUPLE3D_HPP_ */
