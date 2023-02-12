/*
7-8 P77
虚基类举例
*/
#include <iostream>
using namespace std;
class Base0 //定义基类Base0
{
    // Base0是最远虚基类
    //虚基类的成员是由最远派生类的构造函数通过调用虚基类的构造函数进行初始化的。
    //在建立对象时，只有最远派生类的构造函数调用虚基类的构造函数，其他类对虚基类构造函数的调用被忽略。
public:
    int var0;
    void fun0() { cout << "Base0 var0=" << var0 << endl; }
};
class Base1 : virtual public Base0 //定义派生类Base1
{
public: //新增外部接口
    int var1;
};
class Base2 : virtual public Base0 //定义派生类Base2
{
public: //新增外部接口
    int var2;
};
class Derived : public Base1, public Base2 //定义派生类Derived
{                                          // Derived是最远派生类

public: //新增外部接口
    int var;
    void fun() { cout << "Derived" << endl; }
};
int main()
{
    Derived d;
    d.var0 = 2; //直接访问虚基类的数据成员
    d.fun0();   //直接访问虚基类的函数成员
    return 0;
}