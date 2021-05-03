#include <iostream>
#include <vector>

#include "libraries/utils.h"

int Utils::maxSubSum(vector<int>& a) {
  int maxSum = 0;
  for (int i = 0; i < a.size(); ++i) {
    for (int j = 0; j < a.size(); ++j) {
      int thisSum = 0;
      for (int k = i; k < j; ++k) {
        thisSum += a[k];
      }
      if (maxSum < thisSum) maxSum = thisSum;
    }
  }
  return maxSum;
}
