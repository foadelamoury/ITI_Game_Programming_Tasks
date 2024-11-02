#include "Vector3.h"




Vector3::Vector3(Vector3& v)
{
	x = v.x;
	y = v.y;
	z = v.z;
}

//Vector3::Vector3(Vector3& v) = delete; //copy constructor if you don't want let the program makes a copy of the object
