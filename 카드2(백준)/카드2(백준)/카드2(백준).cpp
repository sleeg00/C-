#include <iostream>
#include <queue>
#include <algorithm>
#include <cstdio>
using namespace std;

queue<int> q;
int n,k;
int main() {
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	for (int i = 1; ; i++) {
		k = q.front();
		if (q.size() == 1) {
			printf("%d\n", k);
			break;
		}
		if (i % 2 == 1) {
			q.pop();
		}
		else if (i % 2 == 0) {
			q.push(k);
			q.pop();
		}
	}
}