#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int start = 0, end;
    bool first = true;
    while ((end = s.find(' ', start)) != string::npos) {
        string word = s.substr(start, end - start);
        if (!word.empty()) {
            if (!first) cout << ",";
            cout << word.size();
            first = false;
        }
        start = end + 1;
    }
    string l = s.substr(start);
    if (!l.empty()) {
        if (!first) cout << ",";
        cout << l.size();
    }
    return 0;
}