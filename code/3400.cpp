#include<bits/stdc++.h>
using namespace std;
struct stui{
	int num,c,m,e,cme;
};
int main(){
	int a,b;
	cin >> a;
	stui s[a];
	for(int i = 0; i < a; i++){
		cin >> s[i].c;
		cin >> s[i].m;
		cin >> s[i].e;
		s[i].num = b;
		b++;
    }
    for(int m = 0; m < a; m++){
    	s[m].cme = s[m].c + s[m].m + s[m].e;
    	s[m].num++;
	}
	for(int j = 0; j < a; j++){
		for(int h = 0; h < a; h++){
			if(s[j].cme < s[h].cme || s[j].cme == s[h].cme && s[j].c < s[h].c || s[j].cme == s[h].cme && s[j].c == s[h].c || s[j].cme == s[h].cme && s[j].c == s[h].c && s[j].num > s[h].num) swap(s[j],s[h]);
		}
    }    
	for(int z = a-1; z > a - 6; z--){
		cout << s[z].num << " ";
		cout << s[z].cme << endl;
	}
	return 0;
}