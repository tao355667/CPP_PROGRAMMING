#include "file_5_12.h"
#include <iostream>
void fn1()
{
    static int n = 0;
    n++;                            // n自增1
    std::cout << "n=" << n << "\n"; //输出n的值
}