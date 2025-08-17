#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool f = 0;
    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n-x; y++) {
            int z=n-x-y;
            if (z%3==0&&5*x+3*y+z/3==n) {
                cout<<x<<" "<<y<<" "<<z<<'\n';
                f = 1;
            }
        }
    }
    if (!f) cout << "No Answer.";    
    return 0;
}
