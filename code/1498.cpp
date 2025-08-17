#include<bits/stdc++.h>
using namespace std;
struct TN {
    char val;
    TN* left;
    TN* right;
    TN(char x) {
        val = x; 
        left = nullptr;
        right = nullptr;
    }
};
TN* BT(string& awa, int& idx) {
    if (idx >= awa.length() || awa[idx] == '#') {
        idx++;
        return nullptr;
    }
    TN* node = new TN(awa[idx++]);
    node->left = BT(awa, idx);
    node->right = BT(awa, idx);
    return node;
}
void PO(TN* rt) {
    if (rt == nullptr) return;
    cout << rt->val << " ";
    PO(rt->left);
    PO(rt->right);
}
void iO(TN* rt) {
    if (rt == nullptr) return;
    iO(rt->left);
    cout << rt->val << " ";
    iO(rt->right);
}
void pO(TN* rt) {
    if (rt == nullptr) return;
    pO(rt->left);
    pO(rt->right);
    cout << rt->val << " ";
}
int main() {
    string in;
    cin >> in;
    int idx = 0;
    TN* rt = BT(in, idx);
    PO(rt);
    cout << '\n';
    iO(rt);
    cout << '\n';
    pO(rt);
 	return 0;
}
