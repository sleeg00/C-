#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
int n, hap = 0,k;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k != 0)
			s.push(k);
		else
			s.pop();
	}
	while (!s.empty()) {
		hap += s.top();
		s.pop();
	}
	cout << hap;
}