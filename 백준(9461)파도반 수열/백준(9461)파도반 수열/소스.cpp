#include <stdio.h>
long long dp[110];
int n;
void ci() {
	scanf_s("%d", &n);
}
void pr() {
	dp[1] = dp[2] = dp[3] = 1;
	dp[4] = dp[5] = 2;
	for (int i = 6; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 5];
	printf("%lld\n", dp[n]);
}
int main() {
	int cnt = 0;
	scanf_s("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		ci();
		pr();
	}
}