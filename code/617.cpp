#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];    
    int ans = 1, cur = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1] + 1) {
            cur++;
            ans = max(ans, cur);
        } else if (a[i] != a[i-1]) {
            cur = 1;
        }
    }
    cout << ans;
    return 0;
}
