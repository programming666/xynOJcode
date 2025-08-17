#include<bits/stdc++.h>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<int> scores;
    string token;
    while (ss >> token) {
        if (token == "+") {
            int l1 = scores.back(),l2 = scores[scores.size()-2];
            scores.push_back(l1 + l2);
        } else if (token == "D") {
            scores.push_back(scores.back() * 2);
        } else if (token == "C") {
            scores.pop_back();
        } else {
            scores.push_back(stoi(token));
        }
    }
    int sum = 0;
    for (int score : scores) {
        sum += score;
    }
    cout << sum << endl;
    return 0;
}
