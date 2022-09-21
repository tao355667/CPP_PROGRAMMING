/*
3-8 P74
求n！
用递归的思想，将n！转化为n*(n-1)!,
最终的0！是1，是一个已经解决的问题。
之前的问题便可迎刃而解
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

//求n的阶乘
unsigned fac(unsigned n){
    unsigned f;
    if(n==0) f=1;
    else f=n*fac(n-1);
    return f;
}

int main()
{
    unsigned n;
    cout<<"Enter a positive integer:";
    cin>>n;
    unsigned y=fac(n);//调用函数求解
    cout<<n<<"!="<<y<<endl;

    system("pause");
    return 0;
}
