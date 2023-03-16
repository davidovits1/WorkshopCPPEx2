#pragma once
#include "Point.h";
const float PI = 3.14;
class Circle
{
	Point center;
	float radius;

public:
	Circle(Point p, float r);
	Circle(float x = 1, float y = 1, float r = 1);
	Point getCenter() { return center; }
	float getRadius() { return radius; }
	float areacircle();
	float circumferenceCircle();
	int onInOut(Point p);
	float distance(Point p);
};