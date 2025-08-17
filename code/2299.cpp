#include<bits/stdc++.h>
using namespace std;
#define int long long
bool find(int v,vector<int> &ve){
	for(int i : ve){
		if(i==v) return 1;
	}
	return 0;
}
signed main(){
	unordered_map<int,int> mp;
	vector<int> cx;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int tmp;
		cin>>tmp;
		if(!find(tmp,cx)) cx.push_back(tmp);
		mp[tmp]++;
	}
	sort(cx.begin(),cx.end());
	for(int i = 0;i < cx.size(); i++) cout<<cx[i]<<' '<<mp[cx[i]]<<'\n';
	return 0;
}