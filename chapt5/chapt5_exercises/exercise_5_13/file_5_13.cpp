#include "file_5_13.h"
#include <iostream>
void Y::g(X *x)
{
    x->i++;
}

void Z::f(X *x)
{
    x->i += 5;
}
void X::showi()
{
    std::cout << "i=" << i << "\n";
}
void h(X *x)
{
    x->i += 10;
}