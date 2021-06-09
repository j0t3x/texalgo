#include <algorithm>
#include <cmath>
#include <iostream>

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

List<int> createList(int sz) {
    List<int> li;
    for (int i = 0; i < sz; i++) {
        li.push_back(i);
    }
    return li;
}

int spaces(int max, int current) {
    if (current == 0) current = 1;
    return (int)log10(max) - (int)log10(current);
}

int main(int argc, char *argv[]) {
    TexVector<int> tv = createArray(1000);
    List<int> lt = createList(1000);
    cout << "TexVector elems: " << endl;
    cout << "[" << endl;
    for (int i = 0; i < 1000; i++) {
        fill_n(ostream_iterator<string>(cout), spaces(1000, i), " ");
        cout << tv[i] << ",";
        if ((i + 1) % 20 == 0) cout << endl;
    }
    cout << "]" << endl;
    cout << "List elems: " << endl;
    cout << "[" << endl;
    for (auto itr = lt.begin(); itr != lt.end(); itr++) {
        fill_n(ostream_iterator<string>(cout), spaces(1000, *itr), " ");
        cout << *itr << ",";
        if ((*itr + 1) % 20 == 0) cout << endl;
    }
    cout << "]" << endl;
    return 0;
}

