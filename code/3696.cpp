#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	long long ans=0;
	for(int i = 0; i < s.size(); i++){
		if(s[i]>='a' && s[i]<='z'){
			ans+=(int)(s[i])-(int)('a')+1;
		}
		else{
			ans+=-(int)(s[i]);
		}
	}
	cout<<ans;
	return 0;
}