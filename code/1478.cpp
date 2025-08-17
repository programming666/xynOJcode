#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int a;
  cin>>a;
  int b[a];
  for(int i = 0; i < a; i++) cin>>b[i];
  int k;
  cin>>k;
  for(int i = 0; i < a; i++){
    if(i==k-1) continue;
    cout<<b[i]<<' ';
  }
  return 0;
}