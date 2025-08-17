#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  int b[n],ans=0;
  for(int i = 0; i < n; i++) cin>>b[i];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i==j) continue;
      int a=b[i]+b[j];
      int s=sqrt(a);
      if(s*s==a) ans++;
    }
  }
  cout<<ans/2;
  return 0;
}