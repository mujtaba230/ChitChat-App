#pragma once
#include <iostream>
#include <ctime>
#include<fstream>
using namespace std;

class DateTime
{
	int Day;
	int Month;
	int Year;
	int Hour;
	int Minutes;

public:
	static DateTime Now;
	DateTime(int, int, int, int, int);
	DateTime(DateTime&);
	void PrintTime();
	void PrintDate();
	void SetDate();
	void SetDay(int);
	void SetMonth(int);
	void SetYear(int);
	void SetHour(int);
	void SetMinutes(int);
	int GetHour();
	int GetMinutes();
	static void  SetCurrentDateTime();
	//this function fetches current system date and time 
	static DateTime GetCurrentDateTime();
};
//by default date
DateTime DateTime::Now{ 12,1,2023,12,00 };


// Function definitions


DateTime::DateTime(int day = 0, int month = 0, int year = 0, int hour = 0, int mins = 0) {
	Day = day;
	Month = month;
	Year = year;
	Hour = hour;
	Minutes = mins;
}

DateTime::DateTime(DateTime& date)
{
	Day = date.Day;
	Month = date.Month;
	Year = date.Year;
	Hour = date.Hour;
	Minutes = date.Minutes;
}

void DateTime::PrintTime()
{
	cout << Hour << ":" << Minutes << endl;
}
void DateTime::PrintDate()
{
	cout << "				Date :  ";
	cout << Day << "-" << Month << "-" << Year << endl;
}

void DateTime::DateTime::SetDate()
{
	cout << "Enter Day :";
	cin >> Day;
	cout << "Enter Month :";
	cin >> Month;
	cout << "Enter Year :";
	cin >> Year;
	cout << "Enter Hours :";
	cin >> Hour;
	cout << "Enter Minutes :";
	cin >> Minutes;
}
void DateTime::SetDay(int n)
{
	Day = n;
}
void DateTime::SetMonth(int n)
{
	Month = n;
}
void DateTime::SetYear(int n)
{
	Year = n;
}
void DateTime::SetHour(int n)
{
	Hour = n;
}
void DateTime::SetMinutes(int n)
{
	Minutes = n;
}
int DateTime::GetHour()
{
	return Hour;
}
int DateTime::GetMinutes()
{
	return Minutes;
}
void  DateTime::SetCurrentDateTime()
{

	int day, month, year, hour, minutes;

	cout << "Enter Date " << endl;
	cout << "Enter Day :";
	cin >> day;

	cout << "Enter Month :";
	cin >> month;

	cout << "Enter Year :";
	cin >> year;
	cout << "Enter Current Time" << endl;
	cout << "Enter Hours :";
	cin >> hour;

	cout << "Enter Minutes :";
	cin >> minutes;

	Now.SetDay(day);
	Now.SetMonth(month);
	Now.SetYear(year);
	Now.SetHour(hour);
	Now.SetMinutes(minutes);
}

DateTime DateTime::GetCurrentDateTime()
{

	//time_t t = time(0);   // get time now
	//tm* now = localtime(&t);
	//cout << (now->tm_year + 1900) << '-' << (now->tm_mon + 1) << '-' << now->tm_mday << "\n";
	//DateTime curr(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900, now->tm_hour, now->tm_min);


//time_t now = time(0);
//tm* ltm = localtime(&now);
//	DateTime curr(ltm->tm_mday, now->tm_mon + 1, 1900 + ltm->tm_year, ltm->tm_hour, ltm -> tm_min);

	//time_t curr = time(NULL);

	DateTime curr(19, 1, 2023, 12, 30);

	return curr;

}