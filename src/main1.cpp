#define _CRT_SECURE_NO_WARNINGS
#include "Circle.h"
#include "task1.h"
#include <iostream>

int main()
{
	Circle c(10.0);
	calcDelta();
	std::cout << "the space is - " << calcDelta() << std::endl;
	return 0;
}