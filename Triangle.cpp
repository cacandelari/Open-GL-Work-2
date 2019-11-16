/*
Citing:
Lecture 13 on Ray Tracing

The following ScratchPixel tutorials:
https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-generating-camera-rays/generating-camera-rays

https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-rendering-a-triangle

https://www.scratchapixel.com/lessons/3d-basic-rendering/minimal-ray-tracer-rendering-simple-shapes
*/

#include "Triangle.h"

using namespace Raytracer148;
using namespace Eigen;

HitRecord Triangle::intersect(const Ray &ray) {
	HitRecord result;
	result.t = -1;

	//Calculates and holds the normal for use later in various spots
	Vector3d normal = ((vec2 - vec1).cross(vec3 - vec1)).normalized();

	//Ray Triangle intersection
	//t = (a - p) * n / d * n
	//where n is the normal
	double t = -((ray.origin - vec1).dot(normal)) / (ray.direction.dot(normal));

	////Where point is on a ray
	//r(t) = p + td
	Vector3d position = ray.origin + t * ray.direction;

	double t0 = ((vec2 - vec1).cross(position - vec1)).dot(normal);
	double t1 = ((vec3 - vec2).cross(position - vec2)).dot(normal);
	double t2 = ((vec1 - vec3).cross(position - vec3)).dot(normal);

	//Controls hit detection so a triangle is actually formed
	if (!(t0 > 0 && t1 > 0 && t2 > 0)) {
		return result;
	}

	result.t = t;
	result.position = position;
	result.normal = normal;
	//Pulling all of the results to form the final triangle in main after calling
	return result;
}