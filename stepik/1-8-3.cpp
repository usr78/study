#include <iostream>
#include <vector>
using namespace std;

int abs(int v) {
  return v * ((v>0) - (v<0));
}

int main() {
  int n, c, a[100][100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      c = abs(i-j);
      cout << c << ' ';
      if (c / 10 == 0 and n > 10) {
        cout << ' ';
      }
    }
    cout << endl;
  }
  
  return 0;
}
