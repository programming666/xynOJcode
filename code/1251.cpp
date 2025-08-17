#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int a;
    cin>>a;
    bool cx[505];
    for(int i = 0; i < a; i++){
        int tmp;
        cin>>tmp;
        cx[tmp]=1;
    }
    for(int i = 0; i < 505; i++){
        if(cx[i]){
          cout<<i<<' ';
        }
    }
    return 0;
}