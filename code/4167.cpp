#include<bits/stdc++.h>
using namespace std;
int zhuan(char dx,int z) {
    if (dx == 'E') {
        return z;
    } else { 
        return -z;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char dx1,dx2;
    int p1,p2,h,m;
    cin>>dx1>>p1>>dx2>>p2;
    cin >> h >> m;
    int cf=zhuan(dx1,p1),dd=zhuan(dx2,p2);
    int sc=cf-dd;
    int nh=h-sc,chg=0;
    if (nh >= 24) {
        nh -= 24;
        chg = 1;
    } else if (nh < 0) {
        nh += 24;
        chg = -1;
    }
    cout << nh << " " << m;
    if (chg == 1) {
        cout << " +1";
    } else if (chg == -1) {
        cout << " -1";
    }
    return 0;
}