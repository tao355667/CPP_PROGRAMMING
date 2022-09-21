/*
3-7 P73
输入两个整数，求他们的平方和。使用函数的嵌套实现。
在这里设计两个函数：求平方和函数fun1和求一个整数的平方函数fun2
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

//求一个整数的平方
int fun2(int m){
    return m*m;   
}
//求平方和
int fun1(int x,int y){
    return fun2(x)+fun2(y);
}
int main()
{
    int a,b;
    cout<<"Please enter two integers(a and b):";
    cin>>a>>b;
    cout<<"The sum of square of a and b: "<<fun1(a,b)<<endl;

    system("pause");
    return 0;
}
