#include <iostream>
#include <map>

#include "./stdc++.h"

#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

using namespace std;
void distinctNums() {
  fast;
  std::map<long, long> m;
  int z = 0;
  cin >> z;
  cin.ignore();
  long x;
  string a;
  getline(cin, a);
  stringstream ss(a);
  while (ss >> x) {
    m.find(x) != m.end() ? m[x] = 1 : m[x]++;
  }
  cout << m.size() << endl;
}
