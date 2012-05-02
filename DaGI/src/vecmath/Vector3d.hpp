/*
 * Vector3d.hpp
 *
 *  Created on: Apr 27, 2012
 *      Author: karsten
 */

#ifndef VECTOR3D_HPP_
#define VECTOR3D_HPP_

namespace vecmath {

class Vector3d: public Tuple3d {
public:

	/*
	 * Constructors and destructor
	 */

	Vector3d();
	Vector3d(double x, double y, double z);
	Vector3d(const Tuple3d& t);
	~Vector3d();

	/*
	 * Methods
	 */

	double length() const;

	double lengthSquared() const;

	void normalize();

	/*
	 * Operator functions
	 */

	static Vector3d cross(const Vector3d& v1, const Vector3d& v2);

	static double dot(const Vector3d& v1, const Vector3d& v2);

	double dot(const Vector3d& v) const;

	void cross(const Vector3d& v);


};

}

#endif /* VECTOR3D_HPP_ */
