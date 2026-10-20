#pragma once
#include "Vector3D.h"
#include "Polygon3D.h"

class Collision
{
public:
	//‹…‚ÆŽOŠpŒ`‚Ì“–‚½‚è”»’è
	bool CheckSphereTriangle(const Vector3& sphereCenter, 
		float sphereRadius, const Polygon3D& polygon) const;

private:
	bool IsPointSideTriangle(Vector3 point, const Polygon3D& polygon) const;
};

