/*
5-8 P168
常数据成员举例
*/
#include<iostream>
using namespace std;

class A{
    public:
        A(int i);
        void print();
        const int ss;
    private:
        const int a;
        static const int b; //静态常数据成员
        //类的静态常量若是整型或枚举，也可在类内定义
        //static const int b=11; //静态常数据成员
};

const int A::b=10;  //静态常数据成员在类外说明和初始化
//常数据成员只能通过初始化列表来获得初值
A::A(int i):a(i),ss(i){}

void A::print()
{
    cout<<a<<":"<<b<<endl;
}
int main()
{
/*建立对象a和对象b，并以100和0作为初值，分别调用构造函数，
通过构造函数的初始化列表给对象的常数据成员赋初值*/
    A a1(100),a2(0);
    a1.print();
    a2.print();
    cout<<a1.ss<<":"<<a2.ss<<endl;
    system("pause");//程序暂停
    return 0;
}
