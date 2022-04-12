#include <iostream>
using namespace std;

#include "Sample.h"

void Sample::read()
{
	for (int i = 0; i < size; i++)
		cin >> p[i];
}
void Sample::write()
{
	for (int i = 0; i < size; i++)
		cout << p[i] <<" ";
	cout << endl;
}
int Sample::big()
{
	int ma = 0;
	for (int i = 0; i < size; i++)
		if (ma < p[i])
			ma = p[i];
	return ma;
}
Sample::~Sample()
{
	delete[] p;
}