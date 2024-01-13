/*
完善程序, 使其运行时的输出结果如下 :
f1 function of derive
f2 function of base
f4 function of base
*/

#include <iostream>
using namespace std;

class base
{
public:
    virtual void f1()
    {
        cout << "f1 function of base" << endl; //虚函数
    }
    virtual void f2()
    {
        cout << "f2 function of base " << endl; //虚函数
    }
    void f4()
    {
        cout << "f4 function of base " << endl; //普通成员函数
    }
};

class derive : public base
{
public:
    void f1()
    {
        cout << "f1 function of derive" << endl; //覆盖，虚函数，可多态
    }
    void f2(int x)
    {
        cout << "f2 function of derive " << endl; //同名隐藏，没有被覆盖，不多态
    }
    void f4()
    {
        cout << "f4 function of derive" << endl; //同名隐藏，没有被覆盖，不多态
    }
};

int main()
{
    derive obj;
    cout << "基类指针指向派生类对象--有虚函数覆盖，则有多态" << endl;
    base *p;
    p = &obj;
    p->f1();
    p->f2();
    p->f4();
    cout << "派生类对象赋值给基类对象--类型兼容性原则" << endl;
    base b;
    b = obj;
    b.f1();
    b.f2();
    b.f4();
    cout << "派生类对象--同名函数隐藏，看不到基类中的函数。可用base::看" << endl;
    obj.f1();
    obj.f2(1);
    obj.f4();
    cout << "派生类指针指向派生类对象--同名函数隐藏，看不到基类中的函数。可用base::看" << endl;
    derive *p1;
    p1 = &obj;
    p1->f1();
    p1->f2(1);
    p1->f4();
    return 0;
}