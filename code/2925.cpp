#include<bits/stdc++.h>
using namespace std;
#define int long long
struct Peo{
    string name;
    int sc;
}a[10000005];
int n;
bool dayu(Peo a,Peo b){
    if(a.sc!=b.sc) return a.sc>b.sc;
    return a.name<b.name;
}
int q(int l,int r) {
    Peo jz = a[r];
    int i=(l-1); 
    for (int j = l; j<=r-1; j++) {
        if (dayu(jz,a[j])) {
            i++; 
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
Peo solve(int k) {
    int tgt=n-k;
    int l = 0,r=n-1;
    while (l <= r) {
        int jz=q(l,r);
        if (jz==tgt) return a[jz];
        if (jz>tgt){r=jz-1;}
        else l=jz+1;
    }
    return {"",-1}; 
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i].name >> a[i].sc;
    int k;
    cin >> k;
    cout<<solve(k).name;
    return 0;
}