//
// Created by 王青龙 on 2017/3/21.
//

#include "solution.h"

long long Solution::Fibonacci(unsigned int n) {
    if (n < 2) {
        return n;
    }

    long long f1 = 0;
    long long f2 = 1;
    long long fn = 0;
    for (int i = 2; i <= n; ++i) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}
