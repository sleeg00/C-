#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, k, check, im = 0;
int a[100001];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m >> check;
		queue<pair<int, int>> q;
		priority_queue<int> max;

		int cnt = 0;

		for (int j = 0; j < m; j++) {
			cin >> k;
			q.push({ j, k });
			max.push(k);
		}

		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (max.top() == value) {
				max.pop();
				cnt++;
				if (index == check) {
					a[im++] = cnt;
					break;
				}
			}
			else
				q.push({ index,value });
		}
		while (!q.empty())
			q.pop();
		while (!max.empty())
			max.pop();
	}
	for (int i = 0; i < im; i++)
		cout << a[i] << endl;
	return 0;
}