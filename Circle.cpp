#include "Circle.h"
#include <math.h>

Circle::Circle(Point p, float r)
{
	center = p;
	radius = r;
}

Circle::Circle(float x, float y, float r)
{
	center.setXY(x, y);
	radius = r;
}

float Circle::areacircle()
{
	return radius * radius * PI;
}

float Circle::circumferenceCircle()
{
	return 2 * radius * PI;
}

int Circle::onInOut(Point p)
{
	float dist = distance(p);
	if (dist = radius);
	{
		return 0;
	}
	if (dist < radius);
	{
		return -1;
	}
	return 1;

}

float Circle::distance(Point p)
{
	float x = (p.getX() - center.getX()) * (p.getX() - center.getX());
	float y = (p.getY() - center.getY()) * (p.getY() - center.getY());
	return sqrt(x + y);
}
