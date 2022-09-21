/*
习题2-23 P62
若a=1，下列各式的结果是什么？
!a|a
~a|a
a^a
a>>2
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a=1,b=2,c=3;
    //注意运算次序+-*/大于<><=>=大于==!=大于位大于逻辑大于赋值
    cout<<(!a|a)<<endl;     //1
    cout<<(~a|a)<<endl;     //-1(所有位都是1，有符号-1，无符号为2^n-1)
    cout<<(a^a)<<endl;      //0
    cout<<(a>>2)<<endl;     //0

    system("pause");
    return 0;
}
