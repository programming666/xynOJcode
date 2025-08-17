#include<bits/stdc++.h>
#define int long long
using namespace std;
struct B{
    int t,d;
};
bool cmp(B x,B y) {
    return x.d<y.d;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    B a[n];
    for (int i = 0; i < n; ++i) cin>>a[i].t>>a[i].d;
    sort(a,a+n,cmp);
    priority_queue<int> q;
    int t=0;
    for (int i = 0; i < n; ++i) {
        if(t+a[i].t <= a[i].d){
            t+=a[i].t; 
            q.push(a[i].t);  
        } 
        else if (!q.empty() && q.top()>a[i].t) {
            t -= q.top();
            q.pop();
            t += a[i].t;
            q.push(a[i].t);
        }
    }
    cout << q.size();
    return 0;
}