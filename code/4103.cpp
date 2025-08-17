#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int>yin;  
int fpow(int a,int b,int p){
	a%=p;
	if(b==1)return a;
	if(b==0)return 1;
	if(b&1)return a*fpow(a*a%p,(b>>1),p)%p;
	return fpow(a*a%p,(b>>1),p);
}
void find_yin(int x){
	while(yin.size()) 
		yin.pop_back();    
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			yin.push_back(i);
			yin.push_back(x/i);
		}
	}
	return ;
}
void doing(){
	int p,a;
	cin>>a>>p;
	if(fpow(a,p-1,p)!=1){  
		puts("No");
		return ;
	}
	find_yin(p-1);       
	for(int i=0;i<yin.size();i++){
		int y=yin[i];  
		if(fpow(a,y,p)==1){
			puts("No");
			return ;
		}
	}
	puts("Yes");
	return ;
}
signed main(){
	int t; 
	cin>>t;
	while(t--){
		doing();
	}
	return 0;
}
