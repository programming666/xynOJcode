#include<bits/stdc++.h>
using namespace std;
#define int long long
int sum(int n){
  int ans=0;
  while(n>0){
    ans+=n%10;
    n/=10;
  }
  return ans;
}
signed main(){
  int n,maxn=LLONG_MIN;
  cin>>n;
  for(int i = 0; i < n; i++){
    int tmp;
    cin>>tmp;
    int aaa=sum(tmp);
    if(aaa>maxn) maxn=aaa;
  }
  cout<<maxn;
  return 0;
}