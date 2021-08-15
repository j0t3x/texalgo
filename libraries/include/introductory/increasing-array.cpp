#include <iostream>

#include "./stdc++.h"

#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

using namespace std;
void increasingArr() {
  fast;
  int z = 0;
  cin >> z;
  cin.ignore();
  long x, last = 0;
  long res = 0;
  string a;
  getline(cin, a);
  stringstream ss(a);
  while (ss >> x) {
    long diff = (last - x < 0) ? 0 : last - x;
    res += diff;
    last = x + diff;
  }
  cout << res << endl;
}
