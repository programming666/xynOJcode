#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        int pos =s[i] - 'a';
        if ((i+1)%2 == 1) {pos=(pos+(i+1))%26;} 
        else pos=(pos-(i+1)+26)%26;
        s[i]='a'+pos;
    }
    cout<<s;
    return 0;
}
