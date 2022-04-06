#include <iostream>

using namespace std;

#include "Date.h"

int main() {
	Date birth(2014, 3, 20);
	Date inD("1945/8/15");
	inD.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}