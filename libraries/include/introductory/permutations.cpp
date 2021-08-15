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

void permutations() {
  fast;
  ll n;
  vector<ll> s1, s2;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
  }
  if (n < 4)
    cout << "NO SOLUTION" << endl;
  else {
    int mid = n % 2 == 0 ? n / 2 : n / 2 + 1;
    int i = 0;
    while (i < mid) {
      cout << mid + i + ((n % 2 == 0) ? 1 : 0) << " ";
      cout << i + 1 << " ";
      i++;
    }
    cout << endl;
  }
}
