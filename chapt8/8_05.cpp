/*
8-5 P320
虚析构函数举例
*/
#include <iostream>
using namespace std;
class Base
{
public:
    // ~Base();         //不是虚函数
    virtual ~Base(); //是虚函数
};
Base::~Base()
{
    cout << "Base destructor" << endl;
}
class Derived : public Base
{
public:
    Derived();
    // ~Derived(); //不是虚函数
    virtual ~Derived(); //是虚函数,基类虚函数要加virtual，派生类的函数不加virtual也行
private:
    int *p;
};

Derived::Derived()
{
    p = new int(0);
}
Derived::~Derived()
{
    cout << "Derived destructor" << endl;
    delete p;
}
void fun(Base *b)
{
    delete b; //静态绑定，只会调用~Base()
}
int main()
{
    Base *b = new Derived();
    fun(b);
    return 0;
}

