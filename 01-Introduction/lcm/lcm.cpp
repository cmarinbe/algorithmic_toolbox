#include <iostream>
#include <assert.h> 
#include "../gcd/gcd.h"
#include "lcm.h"


long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long lcm_from_gcd(int a, int b){
    int gcd = gcd_fast(a, b);
    assert(((long long)a) * b % gcd == 0);
    return ((long long)a) * b / gcd;
}

// EOF
