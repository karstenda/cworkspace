/*
 * Point3d.hpp
 *
 *  Created on: Apr 27, 2012
 *      Author: Karsten Daemen
 */

#ifndef POINT3D_HPP_
#define POINT3D_HPP_


namespace vecmath {

class Point3d: public Tuple3d {
public:

	/*
	 * Constructors and destructor
	 */

	Point3d();
	Point3d(double x, double y, double z);
	Point3d(const Tuple3d& t);
	~Point3d();







};

}
#endif /* POINT3D_HPP_ */
