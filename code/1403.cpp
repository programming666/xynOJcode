#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> light(2000005, 0); 
    for (int i = 0; i < n; ++i) {
        double a;
        int t;
        cin >> a >> t;
        for (int j = 1; j <= t; ++j) {
            int k = static_cast<int>(a * j);
            light[k]++;
        }
    }
    
    for (int i = 1; i < light.size(); ++i) {
        if (light[i] % 2 != 0) {
            cout<< i << endl;
            return 0;
        }
    }
    
    return 0;
}