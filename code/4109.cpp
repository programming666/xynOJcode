#include <iostream>

using namespace std;

int main() {
  int x;
  cin >> x;

  int y = 1;
  bool found = false;

  while (y <= 2025) {
    if ((x & y) + (x | y) == 2025) {
      cout << y << endl;
      found = true;
      break;
    }
    y++;
  }

  if (!found) {
    cout << -1 << endl;
  }

  return 0;
}