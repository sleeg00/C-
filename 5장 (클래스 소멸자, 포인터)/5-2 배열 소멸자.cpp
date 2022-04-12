#include <iostream>
using namespace std;
int main()
{
	int* p = new int[5];
	double hap = 0;
	for (int i = 0; i < 5; i++) {
		
		cin >> p[i]; 
		hap += p[i];
	}

	cout << double(hap / 5);
	delete[]p;
}