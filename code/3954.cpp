#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long num = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        num += a[i];
    }
    if (n == 1) {
        cout << "No" << endl;
        return;
    }
    long long lsum = 0;
    bool flag = false;
    for (int i = 0; i < n - 1; ++i) {
        lsum += a[i];
        long long rsum = num - lsum;
        if (lsum == rsum) {
            flag = true;
            break; 
        }
    }
    if (flag) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}