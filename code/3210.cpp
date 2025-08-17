#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> input;
    int num;
    while (cin >> num) {
        input.push_back(num);
    }
    if (input.empty()) {
        return 0;
    }
    int N = input[0];
    vector<int> counts(input.begin() + 1, input.end());
    string s;
    bool flag=1;
    for (int count : counts) {
        char c = flag ? '0' : '1';
        s.append(count, c);
        flag = !flag;
    }
    
    for (int i = 0; i < N; ++i) {
        cout << s.substr(i * N, N) << endl;
    }
    
    return 0;
}