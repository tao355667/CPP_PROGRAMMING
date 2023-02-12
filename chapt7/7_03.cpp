/*
7-3 P264
类型兼容性规则实例
*/
#include <iostream>
using namespace std;
class Base1 //基类Base1定义
{
public:
    void display() const
    {
        cout << "Base1::display()" << endl;
    }
};
class Base2 : public Base1 //公有派生类Base2定义
{
public:
    void display() const
    {
        cout << "Base2::display()" << endl;
    }
};
class Derived : public Base2 //公有派生类Derived定义
{
public:
    void display() const
    {
        cout << "Derived::display()" << endl;
    }
};
void fun(Base1 *p) //参数为执行基类对象的指针
{
    //根据类型兼容性规则。派生类对象的地址可以隐含转换为指向基类的指针
    p->display();
}
int main()
{
    Base1 b1;
    Base2 b2;
    Derived d1;
    fun(&b1);
    fun(&b2);
    fun(&d1);
    return 0;
}
