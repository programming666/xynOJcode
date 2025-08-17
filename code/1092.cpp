#include <bits/stdc++.h>
using namespace std;

void out(int n) {
    vector<int> ans;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            ans.push_back(i);
        }
    }
    for(size_t i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if(i != ans.size() - 1) cout << " ";
    }
    cout << '\n';
}

void solve(int n) {
    if(n == 1) {
        return;
    }
    out(n);
    vector<int> ans;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            ans.push_back(i);
        }
    }
    if(ans.size() <= 2) {
        return;
    }
    solve(ans[ans.size()-2]);
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
