#include <iostream>
#include <map>

#include "./stdc++.h"

#define endl "\n"
#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(nullptr);             \
  cout.tie(nullptr)

using namespace std;

void apartments() {
  fast;
  ll n, m, k, res = 0;
  cin >> n >> m >> k;
  ll a[n], b[m];
  for (int i = 0; i < n; ++i) cin >> a[i];
  for (int i = 0; i < m; ++i) cin >> b[i];
  // O(nlogn)
  sort(a, a + n);
  // O(mlogm)
  sort(b, b + m);
  // O(nlogm)
  int x = 0, y = 0;
  while (x < n && y < m) {
    if (abs(a[x] - b[y]) <= k) {
      x++;
      y++;
      res++;
    } else {
      if (a[x] - b[y] > k)
        y++;
      else
        x++;
    }
  }
  cout << res << endl;
}
