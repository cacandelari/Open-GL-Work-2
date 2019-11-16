/*
Citing:
Lecture 13 on Ray Tracing

The following ScratchPixel tutorials:
https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-generating-camera-rays/generating-camera-rays

https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-rendering-a-triangle

https://www.scratchapixel.com/lessons/3d-basic-rendering/minimal-ray-tracer-rendering-simple-shapes
*/

#include <iostream>
#include "Image.h"
#include "Scene.h"
#include "Sphere.h"
#include "Triangle.h"
using namespace std;
using namespace Raytracer148;
using namespace Eigen;

int main() {
    Image im(400, 400);

    Scene scene;

    Vector3d center;

	center[0] = 0;
	center[1] = 0;
	center[2] = 4;
	scene.addShape(new Sphere(center, 2));

	center[0] = -.5;
	center[1] = 1;
	center[2] = 2.5;
	scene.addShape(new Sphere(center, .5));

	
    center[0] = .5;
    center[1] = 1.25;
    center[2] = 2.75;
    scene.addShape(new Sphere(center, .5));

	//Adding Triangle
	//Triangle has 3 vertices
	
	Vector3d vertex1;
	//Top Vertex
	vertex1[0] = 0;//This controls the x moving about the x axis
	vertex1[1] = .25;//Controls the Y position of this vertex about the Y axis as normal
	vertex1[2] = .25;//This controls the Z position of this vertex, The higher, the farther back
	
	Vector3d vertex2;
	//Bottom left vertex (facing the computer screen)
	vertex2[0] = -4;//This controls the X moving about the X axis
	vertex2[1] = 3.33;//Controls the Y position of this vertex about the Y axis as normal
	vertex2[2] = 5.0;//This controls the Z position of this vertex, The higher, the farther back


	Vector3d vertex3;
	//Bottom right vertex
	vertex3[0] = .75;//This controls the X moving about the X axis
	vertex3[1] = .665;//Controls the Y position of this vertex about the Y axis as normal
	vertex3[2] = 1.0; //This controls the Z position of this vertex, The higher, the farther back

	scene.addShape(new Triangle(vertex1, vertex2, vertex3));
    scene.render(im);

    im.writePNG("test.png");

    return 0;
}
