#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    int a=n%6;
    if(a==1){cout<<"CCTV1";}
    else{
        if(a==2||a==3){cout<<"CCTV2";}
        else cout<<"CCTV3";
    }
    return 0;
}