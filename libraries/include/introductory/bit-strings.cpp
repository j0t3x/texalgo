#include <iostream>
#include <map>

#include "./stdc++.h"

#define M 1000000007LL
#define endl "\n"
#define ll long long int
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(nullptr);             \
  cout.tie(nullptr)

using namespace std;

void bitStrings() {
  fast;
  ll n;
  cin >> n;
  ll res = 1;
  for (int i = 0; i < n; i++) {
    res = (res * 2LL) % M;
  }
  cout << res << endl;
}
