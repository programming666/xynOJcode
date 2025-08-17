#include <bits/stdc++.h>
using namespace std;
bool pr(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    for (int ou = 4; ou <= n; ou += 2) {
        for (int p = 2; p <= ou / 2; ++p) {
            if (pr(p) && pr(ou-p)) {
                cout<<ou<<"="<<p<<"+"<<(ou-p)<<'\n';
                break; 
            }
        }
    }
    return 0;
}
