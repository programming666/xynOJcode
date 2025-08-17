#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for(char c : s) cnt[c - 'a']++;
    int max_cnt = 0;
    for(int num : cnt){
        if (num > max_cnt) max_cnt = num;
    }
    cout << max_cnt << endl;
    return 0;
}