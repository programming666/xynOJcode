#include<bits/stdc++.h>
using namespace std;
int dr[] = {-1, 1, 0, 0},dc[] = {0, 0, -1, 1};
int n,m;
bool bfs(const vector<string>& grid, vector<vector<bool>>& vis, int sr, int sc) {
    queue<pair<int, int>> q;
    q.push({sr, sc});
    vis[sr][sc] = true;
    int min_r = sr,max_r = sr,min_c = sc,max_c = sc,cnt = 0;
    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();
        int r = curr.first,c = curr.second;
        min_r = min(min_r, r);
        max_r = max(max_r, r);
        min_c = min(min_c, c);
        max_c = max(max_c, c);
        cnt++;
        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                if (grid[nr][nc] == 'R' && !vis[nr][nc]) {
                    vis[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
    }
    int h = max_r - min_r + 1,w = max_c - min_c + 1;
    int area = h * w;
    return cnt == area;
}
int main() {
    int fbjret[10086][10086];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int cntt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'R' && !vis[i][j]) {
                if (bfs(grid, vis, i, j)) {
                    cntt++;
                }
            }
        }
    }
    cout<<cntt;
    return 0;
}
