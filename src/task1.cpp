
#include "Circle.h"
#include <iostream>

double calcDelta()
{
	double earthRadius = 6378.1*1000;
	Circle earth(earthRadius);
	double ference = earth.getFerence();
	ference += 1;
	earth.setFerence(ference);
	double newRadius;
	newRadius = earth.getRadius();
	double difference = newRadius - earthRadius;
	return double((difference) * 1000) / 1000;
}

double calcCost()
{
	Circle pool(3);
	Circle path(4);
	double pathCost = (path.getArea() - pool.getArea())*1000;
	double ferenceCost = path.getFerence() * 2000;
	return pathCost + ferenceCost;
}