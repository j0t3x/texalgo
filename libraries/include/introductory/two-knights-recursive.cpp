#include <cmath>
#include <iostream>

#define endl "\n";

using namespace std;
long long recurrTwoKnights(long long n) {
  if (n == 3) {
    cout << 0 << endl;
    cout << 6 << endl;
    cout << 28 << endl;
    return 28;
  }
  long long res = recurrTwoKnights(n - 1) + 3 * (pow(n, 2) - 3) +
                  4 * (pow(n, 2) - 4) + 2 * (n - 4) * (pow(n, 2) - 5) -
                  4 * (pow(n, 2)) + 6 * n + 2;
  cout << res << endl;
  return res;
}

void twoKnights() {
  long long k = 0;
  cin >> k;
  recurrTwoKnights(k);
}

