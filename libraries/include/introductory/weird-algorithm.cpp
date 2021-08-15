#include <iostream>
using namespace std;

void weirdAlgo() {
  long long num = 0;
  std::cin >> num;
  while (num != 1) {
    std::cout << num << " ";
    if (num % 2 == 0) {
      num = num / 2;
    } else {
      num = num * 3 + 1;
    }
  }
  std::cout << num << " ";
}
