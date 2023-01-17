#include <iostream>

using namespace std;

class Base
{

public:
    Base() {}

    void f() { cout << "fun of Base" << endl; }
};

class D1 : public Base
{

public:
    D1() {}

    void f() { cout << "fun of D1" << endl; }
};

class D2 : public D1
{

public:
    void f() { cout << "fun of D2" << endl; }
};

void fun(Base &b) { b.f(); }

int main()
{

    D2 d2;

    fun(d2);

    return 0;
}