#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n;
  cin>>n;
  int b[10]={0};
  for(int i = 0; i < n; i++){
    int tmp;
    cin>>tmp;
    b[tmp]++;
  }
  for(int i = 0; i < 10; i++){
    cout<<i<<' '<<b[i]<<'\n';
  }
  return 0;
}