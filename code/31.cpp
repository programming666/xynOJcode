#include <bits/stdc++.h>
using namespace std;
#define int long long
// 愿佛祖保佑代码
void solve(){
	string s;
	cin>>s;
	bool tp=0;
	string ans="";
	for(char i : s){
		if(i=='_') tp=1;
	}
	if(tp==1){
		for(int i = 0; i < s.size(); i++){
			if(s[i]=='_'){continue;}
			else{
				if(i!=0 && s[i-1]=='_'){
					ans+=s[i]-'a'+'A';
				}
				else ans+=s[i];
			}
		}
	}
	else{
		for(int i = 0;i < s.size(); i++){
			if(s[i]>='A' && s[i]<='Z'){
				ans+='_';
				ans+=s[i]-'A'+'a';
			}
			else{
				ans+=s[i];
			}
		}
	}
	cout<<ans<<'\n';
	return;
}
signed main() {
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int a;
	cin>>a;
	while(a--){
		solve();
	}
	return 0;
}