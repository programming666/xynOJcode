#include <iostream>
using namespace std;
const int MAX_SIZE = 1e5 + 10;
int e[MAX_SIZE], ne[MAX_SIZE], head = -1, idx = 1;
void init() {
    head = -1;
    idx = 1;
}
void awa(int x) {
    e[idx] = x;
    ne[idx] = -1;
    if (head == -1) {
        head = idx;
    } else {
        int cur = head;
        while (ne[cur] != -1) {
            cur = ne[cur];
        }
        ne[cur] = idx;
    }
    idx++;
}
void ins(int k, int x) {
    if (k == 0) { 
        e[idx] = x;
        ne[idx] = head; 
        head = idx++;
        return;
    }
    int pos = head;
    for (int i = 1; i < k; ++i) {
        pos = ne[pos];
    }
    e[idx] = x;
    ne[idx] = ne[pos];
    ne[pos] = idx++;
}
void de(int k) {
    if (k == 1) {
        head = ne[head];
        return;
    }
    int prev = head;
    for (int i = 1; i < k-1; ++i) {
        prev = ne[prev];
    }
    ne[prev] = ne[ne[prev]];
}
void pl() {
    int cur = head;
    while (cur != -1) {
        cout << e[cur] << " ";
        cur = ne[cur];
    }
    cout << '\n';
}
int main() {
    init();
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        awa(x);
    }
    int k, m;
    cin >> k >> m;
    ins(k, m);
    pl();
    int del_k;
    cin >> del_k;
    de(del_k);
    pl();
    return 0;
}