#include<bits/stdc++.h>
using namespace std;
#define int long long
string num0[5]={".....",".***.",".***.",".***.","....."},num1[5]={"****.","****.","****.","****.","****."},num2[5]={".....","****.",".....",".****","....."},num3[5]={".....","****.",".....","****.","....."};
string ans[5];
signed main(){
	string s;
	cin>>s;
	for(int i = 0; i < s.size(); i++){
		if(s[i]=='0'){
			for(int i = 0; i < 5; i++){
				ans[i]+=num0[i];
			}
		}
		if(s[i]=='1'){
			for(int i = 0; i < 5; i++){
				ans[i]+=num1[i];
			}
		}
		if(s[i]=='2'){
			for(int i = 0; i < 5; i++){
				ans[i]+=num2[i];
			}
		}
		if(s[i]=='3'){
			for(int i = 0; i < 5; i++){
				ans[i]+=num3[i];
			}
		}
	}
	for(int i = 0; i < 5; i++){
		cout<<ans[i]<<'\n';
	}
	return 0;
}