#include<bits/stdc++.h>
using namespace std;
void bfs(int r, int c, int N, int M, const vector<string>& grid, vector<vector<bool>>& visited) {
    queue<pair<int, int>> q;
    q.push({r, c});
    visited[r][c] = true;
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nr = current.first + dr[i];
            int nc = current.second + dc[i];

            if (nr >= 0 && nr < N && nc >= 0 && nc < M && 
                grid[nr][nc] == 'R' && !visited[nr][nc]) {
                visited[nr][nc] = true;
                q.push({nr, nc});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<string> grid(N);
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
    }

    vector<vector<bool>> visited(N, vector<bool>(M, false));
    int region_count = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (grid[i][j] == 'R' && !visited[i][j]) {
                region_count++;
                bfs(i, j, N, M, grid, visited);
            }
        }
    }

    cout << region_count << endl;

    return 0;
}
