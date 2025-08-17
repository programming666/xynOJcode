#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  int ans=1;
  for(int i = 1; i <= n; i++){
    ans*=i;
    ans%=1000007;
  }
  cout<<ans;
  return 0;
}