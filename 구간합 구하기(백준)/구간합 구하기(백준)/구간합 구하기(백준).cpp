#include <iostream>
using namespace std;
int n, m, x, y;
int a[100001],hap[100001]={0};
int main() {

	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		hap[i] = hap[i - 1] + a[i];
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		printf("%d\n", hap[y] - hap[x - 1]);
	}
	return 0;
}