#include <chrono>
#include <iostream>
#include <vector>

#include "libraries/list.h"
#include "libraries/matrix.h"

using namespace std;
using namespace std::chrono;

vector<int> createArray(int sz) {
    vector<int> vi(sz);
    for (int i = 0; i < sz; i++) {
        vi[i] = i;
    }

    return vi;
}

long int sumVElemsByRef(const vector<int> &thev) {
    long int res = 0;
    for (auto &elem : thev) {
        res += elem;
    }
    return res;
}
long int sumVElemsByValue(const vector<int> thev) {
    long int res = 0;
    for (auto &elem : thev) {
        res += elem;
    }
    return res;
}

void copy(const Matrix<int> &from, Matrix<int> &to) {
    for (int i = 0; i < 10; i++) {
        cout << "copy m2 to m1" << endl;
        to[i] = from[i];
    }
}

int main(int argc, char *argv[]) {
    List hi;
    hi.print();
    auto &&ba = createArray(10000000);
    auto ba2 = createArray(10000000);

    auto start1 = high_resolution_clock::now();
    long int res = sumVElemsByRef(ba);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    cout << "ByRef - Sum of elems is: " << res << endl;
    cout << "Took " << duration1.count() / 1000.0f << " ms" << endl;

    auto start2 = high_resolution_clock::now();
    res = sumVElemsByValue(ba2);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << "ByValue - Sum of elems is: " << res << endl;
    cout << "Took " << duration2.count() / 1000.0f << " ms" << endl;

    auto start3 = high_resolution_clock::now();
    Matrix<int> m1{10, 100};
    Matrix<int> m2{10, 100};
    for (int i = 0; i < 10; i++) {
        m1[i] = createArray(1000);
        m2[i] = createArray(1000);
    }
    cout << "Created both matrix" << endl;
    copy(m1, m2);
    auto stop3 = high_resolution_clock::now();
    auto duration3 = duration_cast<microseconds>(stop3 - start3);
    cout << "Took " << duration3.count() / 1000.0f << " ms" << endl;

    return 0;
}

