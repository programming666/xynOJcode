#include<bits/stdc++.h>
using namespace std;
signed main(){
  ios::sync_with_stdio(0);
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    int tmp;
    cin>>tmp;
    int b=pow(tmp,0.25);
    if(pow(b,4)==tmp){cout<<b<<'\n';}
    else cout<<-1<<'\n';
  }
  return 0;
}