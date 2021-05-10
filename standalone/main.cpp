#include <stdlib.h>
#include <time.h>

#include <chrono>
#include <iostream>
#include <vector>

#include "libraries/utils.h"

using namespace std;
using namespace std::chrono;

int main(int argc, char *argv[]) {
    for (int i = 10; i <= 100000; i *= 10) {
        srand(time(NULL));
        Utils u;
        vector<int> numvec;
        for (int j = 0; j < i; j++) {
            int randomNum = rand() % 50 - rand() % 50;
            numvec.push_back(randomNum);
        }
        cout << "======================================================"
             << endl;
        cout << "Input size of " << i << " for the max sub sum problem" << endl;
        cout << "======================================================"
             << endl;
        if (i >= 10000) {
            cout << "Cubic solution takes to long to wait" << endl;
        } else {
            auto start1 = high_resolution_clock::now();
            //==========================================//
            int mss1 = u.maxSubSumCubic(numvec);
            //==========================================//
            auto stop1 = high_resolution_clock::now();
            auto duration1 = duration_cast<microseconds>(stop1 - start1);
            cout << "Cubic solution took " << duration1.count() / 1000.0f
                 << " ms"
                 << " and the max subsum is " << mss1 << endl;
        }
        auto start2 = high_resolution_clock::now();
        //==========================================//
        int mss2 = u.maxSubSumSquared(numvec);
        //==========================================//
        auto stop2 = high_resolution_clock::now();
        auto duration2 = duration_cast<microseconds>(stop2 - start2);
        cout << "Cuadratic solution took " << duration2.count() / 1000.0f
             << " ms"
             << " and the max subsum is " << mss2 << endl;
        auto start3 = high_resolution_clock::now();
        //==========================================//
        int mss3 = u.maxSubSumNLogN(numvec, 0, numvec.size() - 1);
        //==========================================//
        auto stop3 = high_resolution_clock::now();
        auto duration3 = duration_cast<microseconds>(stop3 - start3);
        cout << "NLogN solution took " << duration3.count() / 1000.0f << " ms"
             << " and the max subsum is " << mss3 << endl;
        auto start4 = high_resolution_clock::now();
        //==========================================//
        int mss4 = u.maxSubSumLinear(numvec);
        //==========================================//
        auto stop4 = high_resolution_clock::now();
        auto duration4 = duration_cast<microseconds>(stop4 - start4);
        cout << "Linear solution took " << duration4.count() / 1000.0f << " ms"
             << " and the max subsum is " << mss4 << endl;
    }
    return 0;
}

