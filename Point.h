#pragma once
class Point
{
	float x;
	float y;
	void setX(float x);
	void setY(float y);


public:
	Point(float x = 1, float y = 1);
	float getX();
	float getY();
	void setXY(float x, float y);
	
}; 
