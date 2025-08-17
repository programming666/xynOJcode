#include <iostream>
using namespace std;

int n, a[14];
bool b[14], c[27], d[27];

void f(int i) {
    if (i == n) {
        for (int j = 0; j < n; ++j) {
            cout << a[j] + 1 << (j < n - 1 ? " " : "\n");
        }
        return;
    }
    for (int j = 0; j < n; ++j) {
        if (!b[j] && !c[i - j + n] && !d[i + j]) {
            a[i] = j;
            b[j] = c[i - j + n] = d[i + j] = true;
            f(i + 1);
            b[j] = c[i - j + n] = d[i + j] = false;
        }
    }
}

int main() {
    cin >> n;
    f(0);
    return 0;
}