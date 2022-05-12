#version 410

layout (location=0) in vec3 position;

uniform mat4 view_matrix;
uniform mat4 proj_matrix;
void main()
{
    gl_Position = vec4(position, 1.0);
}
