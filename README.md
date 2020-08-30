# Minimal OpenGL project

## Getting started
---------------

Since I didn't found something that can be used for quickly running and setting up OpenGL projects this is a minimal OpenGL project that can be used for building larger projects. 
It uses CMake build system and GLFW for managing windows and OpenGL context creation. I've also added *glm* as a dependency since it is widely used for OpenGL projects. 
This projects renders [red triangle](http://www.opengl-tutorial.org/beginners-tutorials/tutorial-2-the-first-triangle/), but it's purpose is to give a good foundation to begginers and everyone who needs it.

## Prerequisites
-------------

- [CMake](https://cmake.org/install/)
- [GLFW](https://www.glfw.org/download.html)
- [glm](https://glm.g-truc.net)


## Building on Windows 
-------------

Install Linux.


## Building on Linux
-------------

Run CMake inside the directory or simply use IDE like Qt Creator. 

Put your Shaders into *shaders* folder with *vs* extension for Vertex shaders and *fs* extension for Fragment shaders. Other shaders should be also supported.


## References

1. OpenGL tutorial: http://www.opengl-tutorial.org/