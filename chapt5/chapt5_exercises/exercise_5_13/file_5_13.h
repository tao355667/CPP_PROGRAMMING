#ifndef __FILE_5_13__
#define __FILE_5_13__
/*
习题5-13 P188
定义类X、Y、Z，
函数h(X*)，满足：类X有私有成员i，
Y的成员函数g(X*)是X的友元函数，实现对X的成员i加1；
类Z是类X的友元类，其成员函数f(X*)实现对X的成员i加5；
函数h(X*)是X的友元函数，实现对X的成员i加10.
在一个文件中定义和实现类，在另一个文件中实现main()函数*/
class X;
class Y
{
public:
    static void g(X *x); // Y的成员函数g(X*)是X的友元函数，实现对X的成员i加1；
};
class Z
{
public:
    void f(X *x); //类Z是类X的友元类，其成员函数f(X *) 实现对X的成员i加5；
};
class X
{
    friend void Y::g(X *x);
    friend class Z;
    friend void h(X *x);

public:
    X() : i(0) {} //构造函数

    void showi();

private:
    int i;
};

void h(X *x); //函数h(X*)是X的友元函数，实现对X的成员i加10.
#endif