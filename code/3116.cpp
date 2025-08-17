#include<bits/stdc++.h>
using namespace std;
#define int long long
int ans;
void digui(int n,int x){
  int nx=x;
  nx*=10;
  nx+=2;
  ans+=nx;
  if(n==1) return;
  return digui(n-1,nx);
}
void solve(){
  int n;
  cin>>n;
  digui(n,0);
  cout<<ans;
}
signed main(){
  solve();
  return 0;
}