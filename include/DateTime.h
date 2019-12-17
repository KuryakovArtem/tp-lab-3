#pragma once
#include <time.h>
#include <string.h>
#include <vector>
#include <string>
using namespace std;
class DateTime
{
public:

	DateTime(unsigned int, unsigned int, unsigned int);// day mont year
	DateTime();// date today
	DateTime(const DateTime &date);//creates copy of other object	
	
	
	string getToday();// return Today's date
	string getYesterday();// return yesterday's date
	string getTomorrow();//return tomorrow's date
	string getFuture(unsigned int N);// date return after N in the Future
	string getPast(unsigned int N);//date return after N days in the past
	string getCharDate(tm* date);// date to character
	int getDifference(DateTime &date);//counts difference between two dates

private:
	tm* timeStructure;
	time_t nowTime;
	static string week[7];
	static string monthes[12];
};
