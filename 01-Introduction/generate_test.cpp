#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


int main() {
    int n = 1e5;
    int r;
    srand (time(NULL)); /* initialize random seed: */
    std::cout << n << std::endl;
    for (int i=0; i<n; i++) {
        r = rand() % n;
        std::cout << r << " ";
    }
    return 0;
}