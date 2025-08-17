#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> res(n, 0);
    stack<int> s;

    for (int i = 0; i < n; ++i) {
        while (!s.empty() && a[s.top()] < a[i]) {
            res[s.top()] = i + 1;
            s.pop();
        }
        s.push(i);
    }

    for (int i = 0; i < n; ++i) {
        cout << res[i] << (i == n - 1 ? "" : " ");
    }

    return 0;
}