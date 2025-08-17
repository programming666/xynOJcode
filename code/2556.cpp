#include<bits/stdc++.h>
using namespace std;
bool p(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> a[i][j];
    }
    int cnt = 0;
    int dx[]={-1,1,0,0,-1,-1,1,1},dy[]={0,0,-1,1,-1,1,-1,1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(p(a[i][j])){
                bool f = true;
                for (int k = 0; k < 8; k++) {
                    int ni=i+dx[k],nj=j+dy[k];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        if (p(a[ni][nj])) {
                            f = 0;
                            break;
                        }
                    }
                } 
                if (f) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
