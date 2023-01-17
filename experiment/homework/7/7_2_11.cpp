#include <iostream>

using namespace std;

class Base
{

public:
    int m, n;

    Base(int i, int j) : m(i), n(j) {}
};

class Derived : public Base
{

public:
    int m, k;

    Derived(int i, int j) : Base(i, j), m(i + 1), k(j + 1) {}
};

int main()
{

    Derived d(1, 5);

    cout << d.m << d.k << d.n;

    return 0;
}