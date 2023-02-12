/*
7-6 P273
多继承同名隐藏规则（1）
*/
#include <iostream>
using namespace std;
class Base1 //定义基类Base1
{
public:
    int var;
    void fun() { cout << "Member of Base1:" << var << endl; }
};
class Base2 //定义基类Base2
{
public:
    int var;
    void fun() { cout << "Member of Base2:" << var << endl; }
};
class Derived : public Base1, public Base2 //定义派生类Derived
{
public:
    int var;
    void fun() { cout << "Member of Derived:" << var << endl; }
};

int main()
{
    Derived d;
    Derived *p = &d;

    d.var = 1; //访问Derived类成员
    d.fun();

    d.Base1::var = 2; //访问Base1类成员
    d.Base1::fun();

    p->Base2::var = 3; //访问Base2类成员
    p->Base2::fun();
    return 0;
}
