#include <cmath>
#include <iostream>

#define endl "\n";

using namespace std;
long recurrTwoKnights(long long n) {
  long long res = (pow(n, 2) * (pow(n, 2) - 1)) / 2 - 4 * (n - 1) * (n - 2);
  cout << res << endl;
}

void twoKnights() {
  long long k = 0;
  cin >> k;
  for (long long i = 1; i <= k; i++) {
    recurrTwoKnights(i);
  }
}

