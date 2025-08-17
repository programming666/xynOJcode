#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int n,d;
  cin>>n>>d;
  int a[n+4]={0};
  for(int i = 1; i <= d; i++){
    int tmp;
    cin>>tmp;
    a[tmp]+=i;
  }
  for(int i = 0; i < n; i++) cout<<a[i]<<' ';
  return 0;
}