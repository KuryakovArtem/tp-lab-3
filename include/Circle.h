#pragma once

constexpr double pi = 3.14;

class Circle
{
public:
	Circle(double data);	
	void setRadius(double radius);
	void setFerence(double ference);
	void setArea(double area);
	double getRadius();
	double getFerence();
	double getArea();
private:
	double radius;
	double ference;
	double area;
};


