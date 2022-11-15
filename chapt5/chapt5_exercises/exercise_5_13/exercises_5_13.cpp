/*
习题5-13 P188
定义类X、Y、Z，
函数h(X*)，满足：类X有私有成员i，
Y的成员函数g(X*)是X的友元函数，实现对X的成员i加1；
类Z是类X的友元类，其成员函数f(X*)实现对X的成员i加5；
函数h(X*)是X的友元函数，实现对X的成员i加10.
在一个文件中定义和实现类，在另一个文件中实现main()函数

#简单多文件编译链接过程：
#安装mingw后，在VSCode的TERMINAL输入命令：
#先到这三个文件所在的文件夹
cd chapt5
cd chapt5_exercises
cd exercise_5_13
#编译链接
g++ -g .\exercises_5_13.cpp .\file_5_13.cpp -o exercises_5_13.exe
#此时文件夹中就会有exercises_5_13.exe文件，输入指令执行：
.\exercises_5_13.exe
*/
#include "file_5_13.h"
#include <iostream>
using namespace std;
extern int n;
int main()
{
    X x;
    Z z;
    x.showi(); //显示对象x中i的值
    Y::g(&x);  // i增1（Y中静态成员函数可通过类名访问）
    x.showi(); //显示对象x中i的值
    z.f(&x);   // i增5（z中普通成员函数只能通过对象访问）
    x.showi(); //显示对象x中i的值
    h(&x);     // i增10
    x.showi(); //显示对象x中i的值
    return 0;
}