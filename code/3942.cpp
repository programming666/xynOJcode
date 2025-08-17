#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int maxn = *max_element(a.begin(), a.end());
        bool flag = 1;
        for (int num : a) {
            if (maxn % num != 0) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << "\n";
    }
    return 0;
}