#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];
    for(int i = 0; i < 10; i++) cin >> arr[i];
    int tgt;
    cin >> tgt;
    int maxn= -1;
        for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            int sum = arr[i] + arr[j];
            if(sum <= tgt && sum > maxn) {
                maxn= sum;
            }
        }
    }
    cout << maxn;
    return 0;
}
