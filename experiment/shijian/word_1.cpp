/*
请改正程序中指定位置的错误，使程序的输出结果如下：
Base0 display
Base1 display
Derived display

注意：只允许修改注释“ERROR”的下一行，不得改动程序中的其他内容，也不允许增加或删减语句。
源程序清单：
*/
#include <iostream>
using namespace std;

class Base0
{
public:
    /**********ERROR**********/
    virtual void display() const
    {
        cout << "Base0 display" << endl;
    }
};

/**********ERROR**********/
class Base1 : public Base0
{
public:
    void display() const
    {
        cout << "Base1 display" << endl;
    }
};

class Derived : public Base1
{
public:
    /**********ERROR**********/
    void display() const
    {
        cout << "Derived display" << endl;
    }
};

/**********ERROR**********/
void fun(Base0 &b)
{
    b.display();
}

int main()
{
    Base0 b0;
    Base1 b1;
    Derived d;
    fun(b0);
    fun(b1);
    fun(d);
    return 0;
}
