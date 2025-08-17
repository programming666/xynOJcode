#include<bits/stdc++.h>
using namespace std;
bool ck(int num) {
    int tmp = num;
    while (tmp > 0) {
        int digit = tmp % 10;
        if (digit != 0) {
            if (num % digit != 0) {
                return 0;
            }
        }
        tmp /= 10;
    }
    return 1;
}
int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> ans;
    for (int i = n; i <= m; ++i) {
        if (ck(i)) {
            ans.push_back(i);
        }
    }
    if(ans.empty()){cout<<-1;} 
    else {
        for (int i = 0; i < ans.size(); ++i) cout<<ans[i]<<(i==ans.size()-1?"":" ");
    }
    return 0;
}