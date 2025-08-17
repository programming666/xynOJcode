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
	int n,m;
	cin>>n>>m;
	vector<int> ve[n+2];
	for(int i = 0; i < m; i++){
		int x,y;
		cin>>x>>y;
		ve[x].push_back(y);
	} 
	for(int i = 1; i <= n; i++){
		if(ve[i].size()==0){
			cout<<'\n';
			continue;
		}
		for(int j = 0; j < ve[i].size(); j++){
			cout<<ve[i][j]<<(j==ve[i].size()-1?"":" ");
		}
		cout<<'\n';
	}
	return 0;
}