#include <string>
#include <iostream>
using namespace std;

#include "Date.h"
Date::Date(int a, int b, int c)
{
	Ye = a;
	Mo = b;
	Da = c;
}
 Date::Date(string k)
{
	Ye=stoi(k.substr(0, 4));
	Mo = stoi(k.substr(5, 6));
	Da = stoi(k.substr(7, 9));
}
void Date::show()
{
	cout << Ye << ',' << Mo << ',' << Da << endl;
}
int Date::getYear()
{
	return Ye;
}
int Date::getMonth()
{
	return Mo;
}
int Date::getDay()
{
	return Da;
}
