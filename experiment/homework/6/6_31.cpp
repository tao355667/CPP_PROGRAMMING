/*
请将如下程序补充完整，使得程序运行时的输出结果为：

010



注意：仅允许在指定的下划线处填写代码，不得改动程序中的其他内容（需删除下划线）。

试题程序：

*/

#include <iostream>

using namespace std;

class myClass
{

    static int a;

public:
    myClass() { a++; }

    ~myClass() { a--; }

    /**********FILL**********/
    static int getA();//函数原型
    //___【1】___;
};

/**********FILL**********/
int myClass::a=0;//静态变量
//___【2】___;

int myClass::getA() { return a; }

int main()
{

    /**********FILL**********/
    cout << myClass::getA();
    //cout << ___【3】___;

    myClass d[10];

    cout << d[0].getA() << endl;

    return 0;
}