#include "Point.h"

void Point::setX(float x)
{
	this->x = x;
}

void Point::setY(float y)
{
	this->y = y;
}

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Point::getX()
{
	return x;
}

float Point::getY()
{
	return y;
}

void Point::setXY(float x, float y)
{
	setX(x);
	setY(y);

}
