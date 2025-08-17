#include<bits/stdc++.h>
using namespace std;
#define double long double
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double t, v, l1, l2;
    cin >> t >> v >> l1 >> l2;
    double time1 = 1.0*(double)(l1) / (v * 0.6),time2 = 1.0*(double)(l2) / (v * 0.8);
    cout << fixed << setprecision(3);
    if ((time1 < t) && (time2 < t)) {
        if (time1 < time2) {
            cout << "first " << time1;
        } else if (time2 < time1) {
            cout << "second " << time2;
        } else {
            cout << "same " << time1;
        }
    } else if ((time1 < t)) {
        cout << "first " << time1;
    } else if ((time2 < t)) {
        cout << "second " << time2;
    } else {
        cout << "No Answer." ;
    }

    return 0;
}