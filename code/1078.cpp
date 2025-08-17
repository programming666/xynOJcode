#include <bits/stdc++.h>
using namespace std;
struct BT {
    char val;
    BT *left;
    BT *right;
    BT(char x) : val(x), left(NULL), right(NULL) {}
};
BT* BUT(string po, string ino) {
    if (po.empty() || ino.empty()) return NULL;
    char rV = po[0];
    BT* root = new BT(rV);
    int rI = ino.find(rV);
    string lt = ino.substr(0, rI);
    string rt = ino.substr(rI + 1);
    string lp = po.substr(1, lt.length());
    string rp = po.substr(1 + lt.length());
    root->left = BUT(lp, lt);
    root->right = BUT(rp, rt);
    return root;
}
void potl(BT* root) {
    if (!root) return;
    potl(root->left);
    potl(root->right);
    cout << root->val;
}
int main() {
    string po="FCADBEHGM", ino="ACBDFHEMG";
    BT* root = BUT(po, ino);
    potl(root);
    cout << endl;
    return 0;
}