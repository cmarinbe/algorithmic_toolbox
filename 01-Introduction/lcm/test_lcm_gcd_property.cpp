#include <iostream>
#include "../gcd/gcd.h"
#include "lcm.h"


bool lcm_gcd_relation(int a, int b)
{
    return lcm_naive(a, b) * gcd_naive(a, b) == a * b;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << "lcm: " << lcm_naive(a, b) << std::endl;
    std::cout << "gcd: " << gcd_naive(a, b) << std::endl;
    std::cout << "a*b: " << a * b << std::endl;
    std::cout << "lcm*gcd==a*b: " << lcm_gcd_relation(a, b) << std::endl;
  return 0;
}

// EOF