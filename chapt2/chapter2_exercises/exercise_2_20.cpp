/*
习题2-20什么是常量？什么是变量？
常量：程序运行过程中其值始终不可改变的量
变量：程序运行过程中其值可以变化的量，变量需要用名字来标识
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    //整型常量：八进制，十进制，十六进制
    cout<<016<<ends;
    cout<<16<<ends;
    cout<<0x16<<endl;
    //实型常量：一般形式，指数形式
    cout<<12.5<<ends;
    cout<<-12.5<<endl;
    cout<<0.35E+2<<ends;
    cout<<-34.4E-3<<ends;
    cout<<.123E-1<<ends;
    cout<<12.E2<<ends;
    cout<<1.E-3<<endl;
    //字符常量
    cout<<"a"<<ends;
    cout<<"a\n\t\?"<<ends;
    cout<<"\x22 \42"<<endl;
    //字符串常量
    cout<<"This is a string."<<endl;
    cout<<"Please enter \"YES\" or \"NO\""<<endl;
    //布尔常量
    cout<<true<<ends<<false<<endl;

    //变量的初始化
    int ss=3;
    double f=3.56;
    char c='a';
    int b;//变量的声明
    b=66;//变量初始化
    //初始化方式
    double pi=3.1516926;
    int a=pi;
    int a={3};//列表初始化，不能丢失信息，double转int会丢失信息
    int a{3};//列表初始化
    int a(pi);

    system("pause");
    return 0;
}
