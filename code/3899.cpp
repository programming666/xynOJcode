#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int q;
    cin >> q;
    for(int i = 0; i < q; ++i){
        int l, r;
        cin>>l>>r;
        sort(a+l-1,a+r);
    }
    for (int i = 0; i < n; ++i) cout<<a[i]<<(i==n-1?"":" ");
    return 0;
}