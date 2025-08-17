#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,w,x,a[607];
signed main() {
	scanf("%lld%lld", &n, &w);
	for(int i = 1; i <= n; ++i){
		scanf("%lld", &x);
		a[x]++;
		int pl = max(1LL,i*w/100),num = 0;
		for(int j = 600; j >= 0; --j){
			num+=a[j];
			if(num>=pl){printf("%lld ",j);break;}
		}
	}
	return 0;
}

