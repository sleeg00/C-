#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
#include <algorithm>
using namespace std;
vector<int> map[100001];
int visit[100001];
int visit2[100001];
int n, m, p, x, y;
void dfs(int start) {
	visit[start] = 1;
	cout << start << " ";
	for (int i = 0; i < map[start].size(); i++) {
		if (visit[map[start][i]] == 0)
		{
			dfs(map[start][i]);
		}
	}
}
void bfs (int start) {
	visit2[start] = 1;
	queue<int> q;
	q.push(start);
	while (!q.empty()) {
		x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 0; i < map[x].size(); i++) {
			if (visit2[map[x][i]] == 0) {
				q.push(map[x][i]);
				visit2[map[x][i]] = 1;
			}
		}
	}
}
int main() {
	scanf_s("%d %d %d", &n, &m, &p);

	for (int i = 1; i <= m; i++) {
		scanf_s("%d %d", &x, &y);
		map[x].push_back(y);
		map[y].push_back(x);
	}
	for (int i = 1; i <=n; i++) {
		sort(map[i].begin(), map[i].end());
	}
	dfs(p);
	cout << endl;
	bfs(p);
}