#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    if (N % 3 == 0) {
        cout << N / 3 << endl;
    } 
    else if (N % 2 == 1) {
        int k = (N + 2) / 3;
        if (k % 2 == 1) {
            cout << k << endl;
        } 
    else {
            cout << k + 1 << endl;
        }
    } 
    else { 
        if (N == 4) {
            cout << 4 << endl;
        } 
        else {
            int k = (N + 2) / 3;
            if (k % 2 != 0) k++;
            while (3 * k < N) k += 2;
            cout << k << endl;
        }
    }
    return 0;
}