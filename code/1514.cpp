#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  string s;
  cin>>s;
  string q=s;
  reverse(q.begin(),q.end());
  if(q==s){cout<<"yes";}
  else cout<<"no";
  return 0;
}