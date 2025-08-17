#include<bits/stdc++.h>
using namespace std;
int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n <= 0) return 0;
    vector<long long> a;
    unordered_set<long long> seen;
    a.push_back(1);
    seen.insert(1);
    for (int k = 2; k <= n; ++k) {
        long long last = a.back();
        long long next = last - k;
        if (next > 0 && seen.find(next) == seen.end()) {
            a.push_back(next);
            seen.insert(next);
        } 
        else {
            long long nxt = last + k;
            a.push_back(nxt);
            seen.insert(nxt);
        }
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < n; ++i) cout<<a[i]<<(i==n-1?"":" ");
    return 0;
}