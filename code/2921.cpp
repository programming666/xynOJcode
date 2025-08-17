#include<bits/stdc++.h>
using namespace std;
#define int long long
int poww(int a,int b){
    int ans=1;
    for(int i = 0; i < b; i++) ans*=a;
    return ans;
}
signed main(){
  int a,b;
  cin>>a>>b;
  cout<<poww(a,b);
  return 0;
}