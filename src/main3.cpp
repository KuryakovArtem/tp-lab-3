#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <ctime>
#include <string.h>
#include <iostream>

int main()
{
	DateTime a(10, 12, 2019);
	DateTime day;	
	std::cout << "today - " << day.getToday() << std::endl;
	std::cout << "yesterday - " << day.getYesterday() << std::endl;
	std::cout << "tomorrow - " << day.getTomorrow() << std::endl;
	std::cout << "28 days earlier -" << a.getPast(28) << std::endl;
	std::cout << "28 days later - " << a.getFuture(28) << std::endl;
	std::cout << "difference between days - " << a.getDifference(day) << std::endl;
	return 0;
}
