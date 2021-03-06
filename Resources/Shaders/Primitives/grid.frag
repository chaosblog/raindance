#ifdef GL_ES
precision mediump float;
#endif

varying vec2 v_Texcoord;

varying vec2 v_Step;
varying vec2 v_Division;

varying vec4 v_Color;
varying vec4 v_BackgroundColor;

vec2 computeModuloDistance(vec2 position, vec2 step)
{
	vec2 d;

	d.x = mod(position.x + step.x / 2.0, step.x);
	d.y = mod(position.y + step.y / 2.0, step.y);

	d.x = abs(d.x - step.x / 2.0);
	d.y = abs(d.y - step.y / 2.0);

	return d;
}

void main(void)
{
	float threshold = 0.70;

	vec2 d;

	d = computeModuloDistance(v_Texcoord, v_Step);

	if (d.x <= threshold || d.y <= threshold)
	{
	    gl_FragColor = v_Color;
	}
	else
	{
		vec2 divStep = vec2(v_Step.x / v_Division.x, v_Step.y / v_Division.y);

		d = computeModuloDistance(v_Texcoord, divStep);

		if (d.x <= threshold || d.y <= threshold)
		{
			gl_FragColor = 0.7 * v_Color;
		}
		else
		{
			gl_FragColor = v_BackgroundColor;
		}
	}
}
