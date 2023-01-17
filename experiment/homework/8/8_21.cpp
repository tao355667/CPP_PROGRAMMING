#include <iostream>

using namespace std;

class Base
{

public:
    Base() {}

    virtual void f() { cout << "A"; }
};

class D1 : public Base
{

public:
    D1() {}
    // virtual void f() { cout << "AD1"; }
    virtual void f() const { cout << "B"; }
};

class D2 : public D1
{

public:
    virtual void f() { cout << "C"; }
};

void fun(Base &b) { b.f(); }

int main()
{

    Base b;
    D1 d1;
    D2 d2;

    fun(b);
    fun(d1);
    fun(d2);

    b.f();
     d1.f();
     d2.f();

    return 0;
}