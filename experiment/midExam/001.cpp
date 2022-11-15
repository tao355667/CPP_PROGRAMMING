#include <iostream>
#include <cmath>
using namespace std;
class B1
{
    int b1;

public:
    B1(int i)
    {
        b1 = i;
        cout << "B1::" << b1 << endl;
    }
};
class B2
{
    int b2;

public:
    B2(int i)
    {
        b2 = i;
        cout << "B2::" << b2 << endl;
    }
};
class B3
{
    int b3;

public:
    B3(int i)
    {
        b3 = i;
        cout << "B3::" << b3 << endl;
    }
};
class D
{
    int d;
    B1 b1;
    B2 b2;
    B3 b3;

public:
    D(int i, int j, int k, int l) : b1(i), b2(j), b3(k)
    {
        d = l;
        cout << "D::" << d << endl;
    }
};
int main()
{
    D d(1, 2, 3, 4);
    return 0;
}