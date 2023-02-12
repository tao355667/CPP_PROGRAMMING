/*
7-7 P273
多继承同名隐藏规则（2）
*/
#include <iostream>
using namespace std;
class Base0 //定义基类Base0
{
public:
    int var0;
    void fun0() { cout << "Member of Base0" << endl; }
};
class Base1 : public Base0 //定义派生类Base1
{
public:
    int var1;
};
class Base2 : public Base0 //定义派生类Base2
{
public:
    int var2;
};
class Derived : public Base1, public Base2 //定义派生类Derived
{
public:
    int var;
    void fun() { cout << "Member of Derived:" << var << endl; }
};

int main()
{
    Derived d; //定义Derived对象d
    //使用直接基类
    d.Base1::var0 = 2; // Base1中的var0
    d.Base1::fun0();   // Base1中的fun0()
    //使用直接基类
    d.Base2::var0 = 3; // Base2中的var0
    d.Base2::fun0();   // Base3中的fun0()
    //直接访问
    // d.var0=1;//错误，不知道var0是Base1中的还是Base2中的
    return 0;
}
