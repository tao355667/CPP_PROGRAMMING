/*
8-6 P323
抽象类举例
*/
#include <iostream>
using namespace std;

class Base1 //基类Base1定义
{
public:
    virtual void display() const = 0; //纯虚函数
};

class Base2 : public Base1 //公有派生类Base2定义
{
public:
    void display() const; //覆盖基类纯虚函数
};
void Base2::display() const
{
    cout << "Base2::display" << endl;
}

class Derived : public Base2 //公有派生类Derived定义
{
public:
    void display() const;
};
void Derived::display() const
{
    cout << "Derived::display" << endl;
}
void fun(Base1 *ptr)
{
    ptr->display();
}
int main()
{
    // Base1 b1;//错误，声明基类对象
    Base1 *p;   //正确，声明基类指针
    Base2 b2;   //声明派生类对象
    Derived d1; //声明派生类对象

    p = &b2;
    fun(p); //调用派生类Base2函数成员
    p = &d1;
    fun(p); //调用派生类Derived函数成员
    
    return 0;
}
