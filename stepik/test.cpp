#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, pn, cn, max, min;
  vector <int> A;
  // inserting num of els and first el
  cin >> n >> pn;
  // starting cycle with instant check
  for (int i = 1; i < n; i++) {
    cin >> cn;
    if (pn > 0 and cn > 0 or pn < 0 and cn < 0) {
      if (cn > pn) {
        max = cn;
        min = pn;
      } else {
        max = pn;
        min = cn;
      }
      cout << min << " " << max;
      break;
    }
    pn = cn;
  }
  return 0;
}
