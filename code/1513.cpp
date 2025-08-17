#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int a;
  cin>>a;
  for(int i = 1; i <= a; i++){
    for(int j = i+1; j <= a; j++){
      cout<<i<<' '<<j<<'\n';
    }
  }
  return 0;
}