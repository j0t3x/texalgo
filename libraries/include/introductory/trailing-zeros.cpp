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

void trailingZeros() {
  fast;
  ll n;
  cin >> n;
  ll res = 0;
  for (ll i = 5; n / i >= 1; i *= 5) res += n / i;
  cout << res << endl;
}
