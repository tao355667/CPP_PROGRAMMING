#include <iostream>
using namespace std;

class ABC
{
    int a;

public:
    ABC(int aa) : a(aa) {} //缺少:
};

void test()
{
}

int main()
{
    test();
    system("pause");
    return 0;
}