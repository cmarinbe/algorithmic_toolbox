#include <iostream>
#include <assert.h>

int main(){
    int a = 0;
    int b = 0;
    int sum = 0;
    std::cout << "Introduce two integers separated by space" << std::endl;
    std::cin >> a;
    std::cin >> b;
    assert (a>=0 && b<=9);
    sum = a + b;
    std::cout << sum << std::endl;
    return 0;
}