attribute vec3 a_Position;

uniform mat4 u_ModelViewProjection;
uniform vec4 u_Color;

varying vec4 v_Color;

void main(void)
{
    v_Color = u_Color;
    gl_Position = u_ModelViewProjection * vec4(a_Position, 1.0);
}

