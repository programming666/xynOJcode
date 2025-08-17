#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n,k,maxn=LLONG_MIN,minn=LLONG_MAX;
	cin>>n>>k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
		maxn=(a[i]>maxn?a[i]:maxn);
		minn=(a[i]<minn?a[i]:minn);
	}
	for(int i = 0; i < n; i++){
		if(a[i]>k) a[i]=maxn;
		if(a[i]<k) a[i]=minn;
	}
	for(int i = 0; i < n; i++){
		cout<<a[i];
		cout<<(i!=n-1?" ":"");
	}
	return 0;
}