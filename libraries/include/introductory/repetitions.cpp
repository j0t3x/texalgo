#include <iostream>

#include "./stdc++.h"

#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0)

using namespace std;
void repetitions() {
  fast;
  int tmp = 1, highest = 0;
  string a;
  getline(cin, a);
  char last;
  for (int i = 0; i < (int)a.length(); i++) {
    if (a[i] == last)
      tmp++;
    else
      tmp = 1;
    if (tmp > highest) highest = tmp;
    last = a[i];
    // Print current character
  }
  cout << highest << "\n";
}
