#include<bits/stdc++.h>
#define int long long
using namespace std;
int k,n,d,e;
signed main(){
	ios::sync_with_stdio(0);
	cin>>k;
	while(k--){
		cin>>n>>d>>e;
		int m=n-d*e+2;
		int k=m*m-4*n;
		int kk=sqrt(k);
		if(kk*kk!=k){
			cout<<"NO\n";
			continue;
		}
		if((m+kk)%2==1||m<=kk){
			cout<<"NO\n";
			continue;
		}
		cout<<(m-kk)/2<<' '<<(m+kk)/2<<'\n';
	}
	return 0;
} 
