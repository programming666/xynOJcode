#include <bits/stdc++.h>
using namespace std;
int main() {
    int p,e,i,d;
    cin >> p >> e >> i >> d;
    int temp = ((e - p) % 28 + 28) % 28;
    int a = (temp * 11) % 28;
    int x0 = 23 * a + p;
    int diff = ((i - x0) % 33 + 33) % 33;
    int k = (diff * 2) % 33;
    int x = x0 + k * 644;
    x = (x % 21252 + 21252) % 21252;
    int ans;
    if (x > d) {
        ans = x - d;
    } 
    else {
        ans = x + 21252 - d;
    }
    cout << ans << endl;
    return 0;
}