#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<string> map(n);
    for (int i = 0; i < n; i++) {
        cin >> map[i];
    }
    
    // 用集合记录需要种植树苗的位置，避免重复计数
    set<pair<int, int>> plantPositions;
    
    // 8个方向的偏移量（上、下、左、右及四个对角线方向）
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    // 遍历地图中的每个单元格
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // 如果是沙漠地块
            if (map[i][j] == '*') {
                // 检查8个方向
                for (int k = 0; k < 8; k++) {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    
                    // 地图外的区域默认可种树
                    if (x < 0 || x >= n || y < 0 || y >= m) {
                        plantPositions.insert({x, y});
                    }
                    // 地图内的可植树土地
                    else if (map[x][y] == '#') {
                        plantPositions.insert({x, y});
                    }
                }
            }
        }
    }
    
    cout << plantPositions.size() << endl;
    
    return 0;
}
