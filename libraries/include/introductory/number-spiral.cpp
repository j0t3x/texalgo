#include <iostream>
#include <map>

#include "./stdc++.h"

#define endl "\n"
#define ll long long int
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(nullptr);             \
  cout.tie(nullptr)

using namespace std;

void numberSpiral() {
  fast;
  int t;
  cin >> t;
  ll r[t];
  for (int i = 0; i < t; i++) {
    ll y, x;
    cin >> y >> x;
   ll n = max(x, y);
    ll corner = n * n - n + 1;
    cout << corner << endl;
    if (y == x) {
      r[i] = corner;
      continue;
    }

    ll diff = y - x;
    r[i] = n & 1 ? corner - diff : corner + diff;
  }
  for (int i = 0; i < t; i++) cout << r[i] << endl;
}
