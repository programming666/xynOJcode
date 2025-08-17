#include<bits/stdc++.h>
using namespace std;
struct Time{
	int h,m,s;
};
long long zhuan(Time l){
	return l.h*3600+l.m*60+l.s;
}
Time zhuan2(int ss){
	Time ans;
	ans.h=ss/3600;
	ans.m=(ss%3600)/60;
	ans.s=(ss-ans.h*3600-ans.m*60);
	return ans;
}
signed main(){
	int hh,mm,ss,k;
	cin>>hh>>mm>>ss>>k;
	Time a;
	a.h=hh;
	a.m=mm;
	a.s=ss;
	long long tmp=zhuan(a);
	tmp+=k;
	Time ans=zhuan2(tmp);
	cout<<ans.h<<' '<<ans.m<<' '<<ans.s;
	return 0;
}