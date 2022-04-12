#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int cnt = 0;
	int index = 0;
	getline(cin, str,'.');
	while (true)
	{
		index = str.find('a', index);
		if (index == -1)
			break;
		else
			cnt++;
		cout << index << endl;
	}
	cout << cnt;
}