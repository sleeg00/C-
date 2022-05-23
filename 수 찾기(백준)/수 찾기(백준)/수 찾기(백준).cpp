#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

long N, m, w, k;
int a[1000001];
int cnt = 0;
int f(int n) {
	int start = 0;
	int ed = N - 1;
	while (start <= ed) {
		int mid = (start + ed) / 2;
		if (a[mid] == n) return 1;
		else if (n < a[mid]) ed = mid - 1;
		else start = mid + 1;
	}
	return 0;
}
int main() {
	scanf("%d", &N);
	for (int i = 0; i <N; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + N);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &w);
		printf("%d\n", f(w));
	}
}