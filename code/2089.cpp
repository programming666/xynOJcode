#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,r,a;
	cin>>n>>l>>r;
	a=(l/n==r/n?r%n:n-1);
	cout<<a;
	return 0;
}