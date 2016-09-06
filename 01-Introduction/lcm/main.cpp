#include <iostream>
#include "lcm.h"

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_from_gcd(a, b) << std::endl;
  return 0;
}
