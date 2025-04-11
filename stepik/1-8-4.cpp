#include <iostream>
using namespace std;

int main() {
  int x, y, n, m, t, a[100][100];
  cin >> y >> x;
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      cin >> a[i][j];
    }
  }
  cin >> n >> m;
  for (int i = 0; i < y; i++) {
    t = a[i][n];
    a[i][n] = a[i][m];
    a[i][m] = t;
  }
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
  return 0;
}
