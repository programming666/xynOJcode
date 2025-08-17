#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100005],b[100005],c[100005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	reverse(a+1,a+n+1);
	reverse(b+1,b+m+1);
	for(int i=1;i<=max(m,n);i++) c[i]=a[i]+b[i];
	for(int i=1;i<=max(m,n);i++){
		c[i+1]+=c[i]/(i+1);
		c[i]%=(i+1);
	}
	if(c[max(m,n)+1]) cout<<1<<' ';
	for(int i=max(n,m);i>=1;i--) cout<<c[i]<<' ';
	return 0;
}
