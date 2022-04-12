#include <iostream>
using namespace std;

#include "Circle.h"

int main()
{
	int n;
	int cnt = 0;
	Circle* p = new Circle[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		p -> setRadius(n);
		if (p->getArea() > 100)
			cnt++;

	}
	cout << cnt << endl;
	delete[] p;
	return 0;
}