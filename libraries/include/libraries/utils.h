#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Utils {
  public:
   Utils() {}

   int maxSubSumCubic(vector<int>& a);
   int maxSubSumSquared(vector<int>& a);
   int maxSubSumNLogN(vector<int>& a, int left, int right);
   int maxSubSumLinear(vector<int>& a);

  private:
   int max3(int one, int two, int three);
};

