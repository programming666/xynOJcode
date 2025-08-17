#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
void digui(int b){
  int a=b;
  if(a==1){
    cout<<a<<'\n';
    return;
  }
  digui(b-1);
  cout<<a<<'\n';
  return;
}
signed main(){
  cin>>n;
  digui(n);
  return 0;
}