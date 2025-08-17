#include <bits/stdc++.h>
using namespace std;
// 定义全局变量
int n,x,y,ans;
struct qwq {
    int a,b,g,k;
    void input(){cin>>a>>b>>g>>k;}
}q_q[1005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)q_q[i].input();
    cin>>x>>y;
    ans=-1;
    for (int i = n - 1; i >= 0; i--) {
        qwq c = q_q[i];
        if (x >= c.a && x <= c.a + c.g && y >= c.b && y <= c.b + c.k) {
            ans=i+1;
            break;
        }
    }
    cout<<ans;
    return 0;
}