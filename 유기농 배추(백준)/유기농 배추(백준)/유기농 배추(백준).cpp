#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, k, t;
int x, y;
int cnt[10000];
int dx[4] = { 0,-1,1,0 };
int dy[4] = { 1,0,0,-1 };
int map[51][51][51]={0,};
int visit[51][51][51] = { 0, };
int sw = 0, op = 0;
void DFS(int s, int a, int b) {
	visit[s][a][b] = 1;
	for (int i = 0; i < 4; i++) {
		int ndx = a + dx[i];
		int ndy = b + dy[i];
		if (ndx >= 0 && ndy >= 0 ){
			if (map[s][ndx][ndy] == 1 && visit[s][ndx][ndy] == 0)
				DFS(s,ndx, ndy);
		}
	}
}
int main() {

	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n >> m >> k;
		for (int j = 1; j <= k; j++) {
			cin >> x >> y;
			map[i][x][y] = 1;

		}
	}
	for (int i = 1; i <= t; i++) {
		for (int q = 0; q <=50; q++) {
			for (int w = 0; w <=50; w++) {
				if (map[i][q][w] == 1 && visit[i][q][w]==0) {
					sw++;
					DFS(i,q, w);
				}
			}
		}
		
		for (int q = 0; q < m; q++) {
			for (int w = 0; w < n; w++)
				map[i][q][w] = 0;
		}
		cnt[op++] = sw;
		sw = 0;
	}
		for (int i = 0; i < op; i++) {
			cout << cnt[i] << endl;
		}
}