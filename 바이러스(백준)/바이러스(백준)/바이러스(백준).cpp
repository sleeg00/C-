#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> a[100001];
int visit[10001];
int n, m, x, y;
int cnt = 0;
void dfs(int start) {
	visit[start] = 1;
	for (int i = 0; i < a[start].size(); i++) {
		if (visit[a[start][i]] == 0)
			dfs(a[start][i]);
	}
}
int main() {
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf_s("%d %d", &x, &y);
		a[x].push_back(y);
		a[y].push_back(x);
	}
	dfs(1);
	for (int i = 2; i <= n; i++) {
	if (visit[i] == 1)
		cnt++;
}
	printf("%d\n", cnt);
}