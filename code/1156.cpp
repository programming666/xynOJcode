
#include<bits/stdc++.h>
using namespace std;
#define int long long
struct Node {
    char val;
    Node *left, *right;
    Node(char x) : val(x), left(nullptr), right(nullptr) {}
};
Node* build(string& s, int& idx) {
    if (idx >= s.size() || s[idx] == '#') {
        idx++; 
        return nullptr;
    }
    Node* root = new Node(s[idx]);
    idx++; 
    root->left = build(s, idx);
    root->right = build(s, idx);

    return root;
}
void print(Node* root, vector<char>& path) {
    if (!root) {
        return;
    }
    path.push_back(root->val);
    if (!root->left && !root->right) {
        for (size_t i = 0; i < path.size(); ++i) {
            if (i != 0) {
                cout << " "; 
            }
            cout << path[i];
        }
        cout << '\n';
    } else {
        print(root->left, path);
        print(root->right, path);
    }
    path.pop_back();
}
void deleteTree(Node* root) {
    if (!root) {
        return;
    }
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}
signed main() {
    string s;
    getline(cin, s); 
    int idx = 0;
    Node* root = build(s, idx);
    vector<char> path;
    print(root, path);
    deleteTree(root); 
    return 0;
}
