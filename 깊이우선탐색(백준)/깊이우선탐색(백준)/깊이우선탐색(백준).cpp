#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a[100001];
vector<int> visit(100001, 0);
int idx = 1;
void dfs(int v) {
	visit[v] = idx++;
	for (int i = 0; i < a[v].size(); i++) {
		if (visit[a[v][i]] == 0)
			dfs(a[v][i]);
	}
}
int main() {
	int q, w, e;
	int n, m;
	scanf("%d %d %d", &q, &w, &e);
	for (int i = 0; i < w; i++) {
		scanf("%d %d", &n, &m);
		a[m].push_back(n);
		a[n].push_back(m);
	}
	for (int i = 1; i <= q; i++) {
		sort(a[i].begin(), a[i].end());
	}
	dfs(e);
	for (int i = 1; i <= q; i++) {
		printf("%d\n", visit[i]);
	}
	return 0;
}