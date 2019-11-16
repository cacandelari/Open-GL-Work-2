# HW4

Coded and compiled in Visual Studio 2017.

Tutorials used:
Citing:
Lecture 13 on Ray Tracing

The following ScratchPixel tutorials:
https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-generating-camera-rays/generating-camera-rays

https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-rendering-a-triangle

https://www.scratchapixel.com/lessons/3d-basic-rendering/minimal-ray-tracer-rendering-simple-shapes

Eigen3.3.7's Eigen folder is in the src folder along with my .cpp and .h files.

C++ General, Additional Include Dependencies: 
$(SolutionDir)Dependencies\GLM\glm;$(SolutionDir)Dependencies\GLUT\freeglut\include;$(SolutionDir)Dependencies\GLFW\include;$(SolutionDir)Dependencies\glew-1.13.0\include;$(SolutionDir)Dependencies\windows-only-stuff\include;$(SolutionDir)Dependencies\NewEigen\eigen-eigen-323c052e1731

Linker General, Additional Library Directories: 
$(SolutionDir)Dependencies\NewEigen\eigen-eigen-323c052e1731;$(SolutionDir)Dependencies\GLM\glm\glm; $(SolutionDir)Dependencies\GLUT\freeglut\lib\x64; $(SolutionDir)Dependencies\GLFW\lib-vc2017; $(SolutionDir)Dependencies\glew-1.13.0\lib\Release\Win32;$(SolutionDir)Dependencies\windows-only-stuff\lib;

Linker Input, Additional Dependencies: 
libpng.lib;zlib.lib;OpenGL32.lib;freeglut.lib;glew32s.lib;glfw3.lib;kernel32.lib;user32.lib;gdi32.lib;winspool.lib;comdlg32.lib;advapi32.lib;shell32.lib; ole32.lib;oleaut32.lib;uuid.lib;odbc32.lib;odbccp32.lib;%(AdditionalDependencies)

COSC4370 Colin Candelari 1294337 Homework 4
