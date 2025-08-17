#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		long long x;
		string u1,eq,hhh,u2;
		cin >> x >> u1 >> eq >> hhh >> u2;
		long long res = 0;
		if (u1 == "km" && u2 == "m") {
			res = x * 1000;
		} else if (u1 == "km" && u2 == "mm") {
			res = x * 1000000;
		} else if (u1 == "m" && u2 == "mm") {
			res = x * 1000;
		}
		else if (u1 == "kg" && u2 == "g") {
			res = x * 1000;
		} else if (u1 == "kg" && u2 == "mg") {
			res = x * 1000000;
		} else if (u1 == "g" && u2 == "mg") {
			res = x * 1000;
		}
		cout<<x<<" "<<u1<<" = "<<res<<" "<<u2<<'\n';
	}
	return 0;
}