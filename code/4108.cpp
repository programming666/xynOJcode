#include<bits/stdc++.h>
using namespace std;
#define int long long
string lll(string s){
	string res=s;
	for(int i = 0; i < s.size(); i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=(s[i]-'A'+'a');
		}
	}
	return s;
}
signed main(){
	int n,ans=LLONG_MIN;
	string ansstr="";
	cin>>n;
	unordered_map<string,int> mp;
	for(int i = 0; i < n; i++){
		string tmp;
		cin>>tmp;
		tmp=lll(tmp);
		mp[tmp]++;
		if(mp[tmp]>ans){
			ans=mp[tmp];
			ansstr=tmp;
		}
	}
	cout<<ansstr;
	return 0;
}