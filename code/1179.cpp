#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string id;
        cin >> id;
        string a = id.substr(6, 8);
        string year = a.substr(0, 4),month = a.substr(4, 2),day = a.substr(6, 2);
        cout << year << "-" << month << "-" << day << endl;
    }
    return 0;
}