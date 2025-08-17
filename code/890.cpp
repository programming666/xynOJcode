#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int z1[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            z1[i][j] = a[n-1-j][i];
        }
    }
    int z2[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            z2[i][j] = a[n-1-i][m-1-j];
        }
    }
    int z3[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            z3[i][j] = a[j][m-1-i];
        }
    }
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << z1[i][j];
            if (j<n-1) cout << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << z2[i][j];
            if (j<m-1) cout << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << z3[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << '\n';
    }
    
    return 0;
}
