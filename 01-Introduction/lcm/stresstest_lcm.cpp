#include <iostream>
#include "lcm.h"

using std::cout;
using std::endl;

int main() {
    while (true) {
        // rand in range 1000 - 10000
        int a = rand() % 10000 + 1000;
        int b = rand() % 10000 + 1000;
        cout << a << " " << b << endl;
        long long res1 = lcm_naive(a, b);
        long long res2 = lcm_from_gcd(a, b);
        if (res1 != res2) {
            cout << "Wrong answer! " << endl;
            cout << res1 << " " << res2 << endl;
            break;
        }
        else {
            cout << "OK" << endl;
        }
    }
  return 0;
}
