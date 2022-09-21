/*
2-10 P52
读入一系列整数,统计出整数个数i和负整数个数j,读入0则结束
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i=0,j=0,n;//i为正数个数,j为负数个数
    cout<<"Enter some integers please(enter 0 to quit):"<<endl;
    cin>>n;

    while(n!=0)
    {
        if(n>0) i++;
        else j++;
        cin>>n;
    }
    cout<<"Count of positive integers:"<<i<<endl;
    cout<<"Count of negative integers:"<<j<<endl;

    system("pause");
    return 0;
}