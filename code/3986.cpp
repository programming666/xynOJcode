#include<bits/stdc++.h>
using namespace std;
signed main(){
	int a;
	cin>>a;
	int ans=0;
	for(int i = 0;i < a; i++){
		int tmp;
		cin>>tmp;
		ans^=tmp;
	}
	cout<<ans;
	return 0;
}