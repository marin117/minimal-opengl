#version 330 core

layout(location = 0) in vec3 vertices;

void main(){
      gl_Position.xyz = vertices;
      gl_Position.w = 1.0;
}
