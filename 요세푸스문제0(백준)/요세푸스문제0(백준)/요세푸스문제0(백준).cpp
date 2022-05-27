#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int n, m;
int k, cnt = 0;
queue<int> a;
int sw = 0;
int main() {
	cin >> n >> m;
	for (int i = 1; i <=n; i++)
		q.push(i);
	while (!q.empty()) {
		k = q.front();
		q.pop();
		cnt++;
		if (cnt%m==0)
			a.push(k);
		else
			q.push(k);
	}
	cout << "<";
	int im = a.size();
	for (int i = 0; i < im; i++) {
		if (a.size() == 1)
			cout << a.front();
		else
			cout << a.front() << ", ";
		a.pop();
	}
	cout << ">";
}