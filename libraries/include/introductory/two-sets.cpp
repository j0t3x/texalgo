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

void twoSets() {
  fast;
  ll n;
  vector<ll> s1, s2;
  cin >> n;
  if ((n * (n + 1) / 2) % 2 == 0) {
    cout << "YES" << endl;
    ll total = (n * (n + 1) / 4);
    while (n) {
      if (total - n >= 0) {
        s1.push_back(n);
        total -= n;
      } else {
        s2.push_back(n);
      }
      n--;
    }
    cout << s1.size() << endl;
    for (int i = 0; i < s1.size(); i++) cout << s1[i] << " ";
    cout  << endl;
    cout << s2.size() << endl;
    for (int i = 0; i < s2.size(); i++) cout << s2[i] << " ";
    cout  << endl;
  } else {
    cout << "NO" << endl;
  }
}
