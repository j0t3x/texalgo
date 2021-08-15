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

void coinPiles() {
  fast;
  ll n;
  cin >> n;
  bool r[n];
  for (int i = 0; i < n; i++) {
    ll a, b;
    cin >> a >> b;
    ll minpile = min(a, b);
    ll maxpile = max(a, b);
    bool res = false;
    if ((a + b) % 3 == 0 && maxpile <= minpile * 2) res = true;
    r[i] = res;
  }
  for (ll i = 0; i < n; i++) cout << (r[i] ? "YES" : "NO") << endl;
}
