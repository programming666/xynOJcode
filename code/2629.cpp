#include<bits/stdc++.h>
using namespace std;
bool a(int x, int y, int x1, int y1, int x2, int y2) {
    return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}
int main() {
    int vx, vy; 
    cin >> vx >> vy;
    int ax1, ay1, ax2, ay2; 
    cin >> ax1 >> ay1 >> ax2 >> ay2;
    int bx1, by1, bx2, by2; 
    cin >> bx1 >> by1 >> bx2 >> by2;
    int cx1, cy1, cx2, cy2; 
    cin >> cx1 >> cy1 >> cx2 >> cy2;
    cout<<(a(vx, vy, ax1, ay1, ax2, ay2)?"YES\n":"NO\n");
    cout<<(a(vx, vy, bx1, by1, bx2, by2)?"YES\n":"NO\n");
    cout<<(a(vx, vy, cx1, cy1, cx2, cy2)?"YES\n":"NO\n");
    return 0;
}
