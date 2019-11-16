/*
Citing:
Lecture 13 on Ray Tracing

The following ScratchPixel tutorials:
https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-generating-camera-rays/generating-camera-rays

https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-rendering-a-triangle

https://www.scratchapixel.com/lessons/3d-basic-rendering/minimal-ray-tracer-rendering-simple-shapes
*/
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

//following the structure of Sphere.h
namespace Raytracer148 {
	class Triangle: public Shape {
	public:
		Triangle(Eigen::Vector3d vertex1, Eigen::Vector3d &vertex2, Eigen::Vector3d &vertex3) :vec1(vertex1), vec2(vertex2), vec3(vertex3) {}
		//set up vertices and their vectors for the triangle
		//need three vertices instead of center and radius

			virtual HitRecord intersect(const Ray &ray);
			//hit record is used to throw a ray and see what it hits

	private:
		Eigen::Vector3d vec1;
		Eigen::Vector3d vec2;
		Eigen::Vector3d vec3;
		/*
		don't need the double r like in sphere
		but instead need the 3 vertex Vector3d's

		The vec's will be used in Triangle.cpp to calculate normals and crosses
		for ray tracing
		*/
	};
}
#endif