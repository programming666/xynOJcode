#include<bits/stdc++.h>
using namespace std;
int main() {
    int i;
    cin >> i;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    char type = ' '; 
    for (int j = 0; j < i; ++j) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        vector<string> ts;
        string t;
        while (iss >> t) {
            ts.push_back(t);
        }
        long long x, y;
        if (ts.size() >= 3 && (ts[0] == "a" || ts[0] == "b" || ts[0] == "c")) {
            type = ts[0][0];
            x = stoll(ts[1]);
            y = stoll(ts[2]);
        } else {
            x = stoll(ts[0]);
            y = stoll(ts[1]);
        }

        long long res;
        char op;
        switch (type) {
            case 'a':
                res = x + y;
                op = '+';
                break;
            case 'b':
                res = x - y;
                op = '-';
                break;
            case 'c':
                res = x * y;
                op = '*';
                break;
            default:
                res = 0;
                op = ' ';
        }
        string bds;
        if((op=='+' && y < 0)){
            bds=to_string(x) + to_string(y) + "=" + to_string(res);
        }
        else{
          if(op=='-' && y < 0){
            bds = to_string(x) +"+"+ to_string(-y) + "=" + to_string(res);
          }
          else{
            bds = to_string(x) + op + to_string(y) + "=" + to_string(res);
          }
        }

        cout << bds << endl << bds.size() << endl;
    }

    return 0;
}