#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date {
private:
	int Ye, Mo, Da;
public:
	Date();
	Date(int Y, int M, int D);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

#endif DATE_H