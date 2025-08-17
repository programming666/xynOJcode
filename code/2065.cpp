#include<bits/stdc++.h>
using namespace std;
#define int long long
struct Ticket {
    int p,t,used;
} q[1000005];
int head,tail,n,cost;
signed main() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int op,pr,t;
        cin >> op >> pr >> t;
        if (op == 0) {
            cost += pr;
            q[tail].t=t+45;
            q[tail++].p=pr;
        } else {
            while(head < tail && q[head].t < t){
                head++;
            }
            bool f =0;
            for (int j = head; j < tail; ++j) {
                if (q[j].p >=pr && q[j].used == 0) {
                    f = 1;
                    q[j].used = 1;
                    break;
                }
            }
            if (!f) cost+=pr;
        }
    }
    cout << cost;
    return 0;
}

