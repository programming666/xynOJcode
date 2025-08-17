#include<bits/stdc++.h>
using namespace std;
struct Ren {
    int id,sc,sl;
};
bool cmp(Ren a,Ren b) {
    if(a.sc != b.sc) return a.sc > b.sc;
    return a.id < b.id;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,r,q;
    cin>>n>>r>>q;
    int n2 = 2 * n;
    vector<Ren> pll(n2);
    for (int i = 0; i < n2; ++i){
        pll[i].id=i+1; 
        cin>>pll[i].sc;
    }
    for(int i = 0; i < n2; ++i) cin >> pll[i].sl;
    sort(pll.begin(),pll.end(),cmp);
    for (int j = 0; j < r; ++j) {
        vector<Ren> win;
        win.reserve(n);
        vector<Ren> lo;
        lo.reserve(n);
        for (int i = 0; i < n2; i += 2) {
            Ren p1=pll[i];
            Ren p2=pll[i+1];
            if (p1.sl > p2.sl) {
                p1.sc++; 
                win.push_back(p1);
                lo.push_back(p2);
            } 
            else {
                p2.sc++;
                win.push_back(p2);
                lo.push_back(p1);
            }
        }
        int id1=0,id2=0;
        for (int i = 0; i < n2; ++i) {
            if (id1 >= win.size() || 
               (id2 < lo.size() && !cmp(win[id1], lo[id2]))) {
                pll[i] = lo[id2++];
            } 
            else pll[i] = win[id1++];
        }
    }
    cout<<pll[q-1].id;
    return 0;
}