#include <bits/stdc++.h>
using namespace std;
typedef class TN {
    public:
    char val;
    TN *left;
    TN *right;
    TN(char c) : val(c), left(nullptr), right(nullptr) {}
} TN;
TN* BT(string &s, int &idx) {
    if (idx >= s.size() || s[idx] == '#') {
        idx++;
        return nullptr;
    }
    TN *node = new TN(s[idx]);
    idx++;
    node->left = BT(s, idx);
    node->right = BT(s, idx);
    return node;
}
void PO(TN *root, vector<char> &res) {
    if (!root) return;
    res.push_back(root->val);
    PO(root->left, res);
    PO(root->right, res);
}
void iO(TN *root, vector<char> &res) {
    if (!root) return;
    iO(root->left, res);
    res.push_back(root->val);
    iO(root->right, res);
}
void pO(TN *root, vector<char> &res) {
    if (!root) return;
    pO(root->left, res);
    pO(root->right, res);
    res.push_back(root->val);
}
void lO(TN *root, vector<char> &res) {
    if (!root) return;
    queue<TN*> q;
    q.push(root);
    while (!q.empty()) {
        TN *node = q.front();
        q.pop();
        res.push_back(node->val);
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}
void out(vector<char> &res) {
    for (size_t i = 0; i < res.size(); ++i) {
        if (i > 0) cout << " ";
        cout << res[i];
    }
    cout << '\n';
}

int main() {
    string s;
    cin >> s;
    int idx = 0;
    TN *root = BT(s, idx);
    vector<char> p,i,po,l;
    PO(root, p);
    iO(root, i);
    pO(root, po);
    lO(root, l);
    out(p);
    out(i);
    out(po);
    out(l);
    return 0;
}