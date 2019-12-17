#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include "Circle.h"
#include <math.h>
#define pi 3.1415
Circle::Circle(double value)
{
	radius = value;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}


void Circle::setRadius(double data)
{
	radius = data;
	ference = 2 * pi * radius;
	area = pi * radius * radius;
}

void Circle::setFerence(double data)
{
	ference = data;
	radius = ference / (2 * pi);
	area = pi * radius * radius;
}

void Circle::setArea(double data)
{
	area = data;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
}

double Circle::getArea()
{
	return area;
}

double Circle::getFerence()
{
	return ference;
}

double Circle::getRadius()
{
	return radius;
}
