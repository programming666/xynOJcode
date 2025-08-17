#include<bits/stdc++.h>
using namespace std;
#define int long long
void xx(string &s){
  for(int i = 0; i < s.size(); i++){
    if(s[i]>='A' && s[i]<='Z'){
      s[i]-='A';
      s[i]+='a';
    }
  }
  return;
}
signed main(){
  string a,b;
  cin>>a>>b;
  if(a.size()!=b.size()){
    cout<<1;
    return 0;
  }
  if(a==b){
    cout<<2;
    return 0;
  }
  xx(a),xx(b);
  if(a==b){
    cout<<3;
    return 0;
  }
  else{
    cout<<4;
  }
  return 0;
}