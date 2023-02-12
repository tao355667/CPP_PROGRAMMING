/*
8-4 P316
虚函数成员
*/
#include <iostream>
using namespace std;

class Base1
{
public:
    // void display() const;//这个不是虚函数，会类型转换
    virtual void display() const; //这个函数是虚函数，可多态
};
class Base2 : public Base1
{
public:
    void display() const;
};
class Derived : public Base2
{
public:
    void display() const;
};
void Base1::display() const
{
    cout << "Base1::display()" << endl;
}
void Base2::display() const
{
    cout << "Base2::display()" << endl;
}
void Derived::display() const
{
    cout << "Derived::display()" << endl;
}
void fun(Base1 *p)
{
    p->display();
}
void fun1(Base1 b)
{ //使用对象名，绑定发生在编译过程中！
    b.display();
}
int main()
{
    Base1 b1;
    Base2 b2;
    Derived d1;
    fun(&b1);
    fun(&b2);
    fun(&d1);
    //使用对象名，绑定发生在编译过程中！
    fun1(b1);
    fun1(b2);
    fun1(d1);
    return 0;
}