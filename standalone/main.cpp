#include <stdlib.h>
#include <time.h>

#include <chrono>
#include <iostream>
#include <vector>

#include "libraries/utils.h"

using namespace std;
using namespace std::chrono;

int main(int argc, char *argv[]) {
    for (int i = 1; i <= 1000; i *= 10) {
        /* initialize random seed: */
        srand(time(NULL));
        Utils u;
        vector<int> numvec;
        for (int j = 0; j < i; j++) {
            int randomNum = rand() % 50 - rand() % 50;
            numvec.push_back(randomNum);
        }
        auto start1 = high_resolution_clock::now();
        //==========================================//
        u.maxSubSum(numvec);
        //==========================================//
        auto stop1 = high_resolution_clock::now();
        auto duration1 = duration_cast<microseconds>(stop1 - start1);
        cout << "For an input of " << i << " it took "
             << duration1.count() << " us" << endl;
    }
    return 0;
}

