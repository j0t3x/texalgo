#include <algorithm>
#include <cmath>
#include <iostream>
#include <iterator>

#include "libraries/list.h"
#include "libraries/texvector.h"

using namespace std;

TexVector<int> createArray(int sz) {
    TexVector<int> vi(sz);
    for (int i = 0; i < sz; i++) {
        vi[i] = i;
    }
    return vi;
}

int spaces(int max, int current) {
    if (current == 0) current = 1;
    return (int)log10(max) - (int)log10(current);
}

int main(int argc, char *argv[]) {
    TexVector<int> tv = createArray(1000);
    cout << "TexVector elems: " << endl;
    cout << "[" << endl;
    for (int i = 0; i < 1000; i++) {
        fill_n(ostream_iterator<string>(cout), spaces(1000, i), " ");
        cout << tv[i] << ",";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << "]" << endl;
    return 0;
}

