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

int charNum(char c) { return (int)c - 65; }
char numChar(int c) { return (char)(c + 65); }

void palindromeReorder() {
  fast;
  string n;
  cin >> n;
  ll r[26] = {};
  ll l = n.size();
  ll i = 0;
  while (i < l) {
    int loc = charNum(n[i]);
    r[loc] += 1;
    i++;
  }
  i = 0;
  string leftie;
  string righty;
  string center;
  ll evens = 0;
  ll odds = 0;
  while (i < 26) {
    int occurrences = r[i];
    // cout << numChar(i) << " -> " << occurrences << endl;
    if (occurrences & 1) {
      odds++;
      center += string(occurrences, numChar(i));
    }
    if (!(occurrences & 1) && occurrences > 0) {
      evens += occurrences / 2;
      string split = string(occurrences / 2, numChar(i));
      leftie += split;
      righty = split + righty;
    }
    i++;
  }
  if (odds > 1) {
    cout << "NO SOLUTION" << endl;
    return;
  }
  cout << leftie + center + righty << endl;
}
