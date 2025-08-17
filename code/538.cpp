#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000][1000];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
        for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[j][i];
            if (j < n - 1) {
                cout << " ";
            }
        }
        if (i < n - 1) {
            cout << '\n';
        }
    }
    
    return 0;
}
