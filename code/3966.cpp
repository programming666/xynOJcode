#include<bits/stdc++.h>
using namespace std;
int m;
signed main(){
  cin>>m;
  int a[m+1][m+1];
  for(int i = 1; i <= m; i++){
    a[i][i]='+';
    a[i][1]='+';
    a[i][m]='+';
  }
  for(int i = 1;i <= m; i++){
    for(int j = 1; j <= m; j++){
      if(a[i][j]=='+'){cout<<'+';}
      else{cout<<'-';}
    }
    cout<<'\n';
  }
  return 0;
}