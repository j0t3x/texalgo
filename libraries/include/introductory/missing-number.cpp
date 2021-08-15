#include <iostream>

#include "./stdc++.h"

using namespace std;
void missingNumber() {
  long z = 0;
  string a;
  cin >> z;
  cin.ignore();
  long* n = new long[z + 1];
  getline(cin, a);
  stringstream ss(a);
  long x;
  while (ss >> x) {
    n[x] = x;
  }
  for (long i = 1; i < z; i++) {
    long diff = n[i + 1] - n[i];
    if (diff > 1) {
      cout << i << endl;
      break;
    }
    if (diff < 0) {
      cout << i + 1 << endl;
      break;
    }
  }
}
