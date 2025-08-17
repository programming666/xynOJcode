#include <iostream>
#include <string>
using namespace std;

string dfs(string s) {
    if (s.size() == 1) {
        return s[0] == '0' ? "B" : "I";
    }
    int mid = s.size() / 2;
    string left = dfs(s.substr(0, mid));
    string right = dfs(s.substr(mid));
    char current;
    bool has0 = false, has1 = false;
    for (char c : s) {
        if (c == '0') has0 = true;
        else has1 = true;
        if (has0 && has1) break;
    }
    if (has0 && has1) current = 'F';
    else if (has0) current = 'B';
    else current = 'I';
    return left + right + current;
}

int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << dfs(s) << endl;
    return 0;
}