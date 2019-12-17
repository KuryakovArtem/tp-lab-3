#define _CRT_SECURE_NO_WARNINGS
#include "DateTime.h"
#include <time.h>
#include <string>
std::string DateTime::week[7] = { "sunday","monday","tuesday","wednesday","thursday","friday","satturday" };
std::string DateTime::monthes[12] = { "january","february","march","april","may","june","july","august","september","october","november","december" };

DateTime::DateTime(unsigned int nowDay, unsigned int nowMonth, unsigned int nowYear)
{
	time(&nowTime);
	timeStructure = localtime(&nowTime);
	timeStructure->tm_mday = nowDay;
	timeStructure->tm_mon = nowMonth - 1;
	timeStructure->tm_year = nowYear - 1900;
	timeStructure->tm_sec = 0;
	timeStructure->tm_min = 0;
	timeStructure->tm_hour = 0;
	nowTime = mktime(timeStructure);
	timeStructure = localtime(&nowTime);
}

DateTime::DateTime()
{
	time(&nowTime);
	timeStructure = localtime(&nowTime);
}

DateTime::DateTime(const DateTime& date)
{
	nowTime = date.nowTime;
	timeStructure = date.timeStructure;
}



string DateTime::getCharDate(tm* date)
{
	string str;
	if (date->tm_mday < 10) 
	{
		str += "0";
	}
	str += to_string(date->tm_mday) + " " + monthes[date->tm_mon] + " " + to_string(date->tm_year + 1900) + " " + week[date->tm_wday];
	return str;
}

string DateTime::getToday()
{
	return getCharDate(timeStructure);
}

string DateTime::getFuture(unsigned int n)
{
	time_t tomorrowS = nowTime + 24 * 60 * 60 * n;
	tm* tomorrow = localtime(&tomorrowS);
	return getCharDate(tomorrow);
}

string DateTime::getPast(unsigned int n)
{
	time_t tomorrowS = nowTime - 24 * 60 * 60 * n;
	tm* tomorrow = localtime(&tomorrowS);
	return getCharDate(tomorrow);
}

string DateTime::getTomorrow()
{
	time_t tomorrowS = nowTime + 24 * 60 * 60;
	tm* tomorrow = localtime(&tomorrowS);
	return getCharDate(tomorrow);
}

string DateTime::getYesterday()
{
	time_t tomorrowS = nowTime - 24 * 60 * 60;
	tm* tomorrow = localtime(&tomorrowS);
	return getCharDate(tomorrow);
}

int DateTime::getDifference(DateTime& date)
{
	int difference = abs(date.nowTime - this->nowTime);
	return difference / (60 * 60 * 24);
}