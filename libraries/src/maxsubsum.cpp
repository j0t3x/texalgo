#include <iostream>
#include <vector>

#include "libraries/utils.h"

int Utils::maxSubSumCubic(vector<int>& a) {
  int maxSum = 0;
  for (int i = 0; i < a.size(); ++i) {
    for (int j = i; j < a.size(); ++j) {
      int thisSum = 0;
      for (int k = i; k < j; ++k) {
        thisSum += a[k];
      }
      if (maxSum < thisSum) maxSum = thisSum;
    }
  }
  return maxSum;
}

int Utils::maxSubSumSquared(vector<int>& a) {
  int maxSum = 0;
  for (int i = 0; i < a.size(); ++i) {
    int thisSum = 0;
    for (int j = i; j < a.size(); ++j) {
      thisSum += a[j];
      if (maxSum < thisSum) maxSum = thisSum;
    }
  }
  return maxSum;
}

int Utils::maxSubSumNLogN(vector<int>& a, int left, int right) {
  if (left == right)
    if (a[left] > 0)
      return a[left];
    else
      return 0;

  int center = (left + right) / 2;
  int maxLeftSum = maxSubSumNLogN(a, left, center);
  int maxRightSum = maxSubSumNLogN(a, center + 1, right);

  int maxLeftBorderSum = 0, leftBorderSum = 0;
  for (int i = center; i >= left; --i) {
    leftBorderSum += a[i];
    if (maxLeftBorderSum < leftBorderSum) maxLeftBorderSum = leftBorderSum;
  }
  int maxRightBorderSum = 0, rightBorderSum = 0;
  for (int j = center + 1; j <= right; ++j) {
    rightBorderSum += a[j];
    if (maxRightBorderSum < rightBorderSum) maxRightBorderSum = rightBorderSum;
  }
  return max3(maxLeftSum, maxRightSum, maxLeftBorderSum + maxRightBorderSum);
}

int Utils::max3(int one, int two, int three) {
  int curmax = one;
  if (two > curmax) curmax = two;
  if (three > curmax) curmax = three;
  return curmax;
}

int Utils::maxSubSumLinear(vector<int>& a) {
  int maxSum = 0;
  int thisSum = 0;
  for (int i = 0; i < a.size(); ++i) {
    thisSum += a[i];
    if (maxSum < thisSum) maxSum = thisSum;
    if (thisSum < 0) thisSum = 0;
  }
  return maxSum;
}
