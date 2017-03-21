#include <iostream>
#include "solution.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution s;
    auto res = s.Fibonacci(20);
    std::cout << res << std::endl;

    return 0;
}