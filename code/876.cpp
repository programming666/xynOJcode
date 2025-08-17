#include <bits/stdc++.h>
using namespace std;
#define int long long
bool isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}
signed main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int r;
    cin >> r;
    while (r--) {
        int m, n;
        cin >> m >> n;
        
        int cnt = 0, sum = 0;
        for (int i = m; i <= n; ++i) {
            if (isPrime(i)) {
                cnt++;
                sum += i;
            }
        }
        
        cout << "count=" << cnt << ",sum=" << sum << '\n';
    }
    
    return 0;
}
