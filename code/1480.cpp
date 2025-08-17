#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int a;
    cin >> a;
    vector<string> aa(a);
    for (int i = 0; i < a; ++i) cin >> aa[i];
    vector<string> bb(a,string(a,' '));
    if(aa[0][0] != '*'){
        for(int i = 0; i < a; ++i){
            for(int j = 0; j < a; ++j) bb[i][j]=aa[a-1-i][a-1-j];
        }
    } 
	else{
		if(aa[0][a-1]!='*'){
        	for(int i = 0; i < a; ++i){
            	for (int j = 0; j < a; ++j) bb[i][j]=aa[a-1-j][i];
        	}
		} 
		else{
			if(aa[a-1][0]!='*'){
        		for (int i = 0; i < a; ++i) {
            		for (int j = 0; j < a; ++j) bb[i][j]=aa[j][a-1-i];
        		}
			} 
			else bb = aa;
    	}
	}
    for(int i = 0; i < a; ++i) cout<<bb[i]<<'\n';
    return;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}