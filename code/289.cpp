#include <bits/stdc++.h>
using namespace std;
#define int long long
// 愿佛祖保佑代码
signed main() {
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    int h,s;
    cin>>h>>s;
    char zl;
    while(cin>>zl){
        if(zl=='u'){
            if(s!=0) s--;
        }
        else{
            if(zl=='d'){
                if(s!=h) s++;
            }
            else{
                break;
            }
        }
    }
    cout<<s;
    return 0;
}