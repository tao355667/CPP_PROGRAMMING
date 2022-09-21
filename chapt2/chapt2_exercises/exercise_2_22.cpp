/*
习题2-22 P62
若a=1,b=2,c=3,下列各式的结果是什么
a|b-c
a^b&-c
a&b|c
a|b&c
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a=1,b=2,c=3;
    //注意运算次序+-*/大于<><=>=大于==!=大于位大于逻辑大于赋值
    cout<<(a|(b-c))<<endl;      //-1
    cout<<((a^b)&(-c))<<endl;   //1
    cout<<(a&b|c)<<endl;        //3
    cout<<(a|b&c)<<endl;        //3

    system("pause");
    return 0;
}
