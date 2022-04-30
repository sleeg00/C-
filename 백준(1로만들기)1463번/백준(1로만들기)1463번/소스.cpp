#include <iostream>
#include <vector>
using namespace std;
void checker(int n, vector<int>& dp) {
	dp[n] = dp[n - 1] + 1;
	if (n % 2 == 0 && dp[n / 2] + 1 < dp[n])
		dp[n] = dp[n / 2] + 1;
	if (n % 3 == 0 && dp[n / 3] + 1 < dp[n])
		dp[n] = dp[n / 3] + 1;
}
int main() {

	int n;
	cin >> n;

	vector<int> dp(n + 1, 999);

	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= n; i++) {
		checker(i, dp);
	}
	cout << dp[n];
	return 0;

}