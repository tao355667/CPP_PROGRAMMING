/*
3-2 P67
输入一个8位二进制数，将其转换为十进制数输出
每一位的数乘其相应的权，求和
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//计算x的n次方
double power(double x,int n);

int main()
{
    //我的代码
    // int value=0,bin,bit;
    // cout<<"Please enter an 8 bit binary number:";
    // cin>>bin;
    // for(int i=0;i<=7;i++){
    //     bit=bin%10;//取末位
    //     value+=bit*power(2,i);//每位乘权，求和
    //     bin=bin/10;//去除末位
    // }
    // cout<<"Decimal value is "<<value<<endl;

    //书上代码
    int value=0;//对值进行初始化

    cout<<"Enter an 8 bit binary number: ";
    for(int i=7;i>=0;i--){
        char ch;
        cin>>ch;//接收一个字符
        if(ch=='1') //若这个字符是1
            value+=static_cast<int>(power(2,i));//静态投射类型转换
    }
    cout<<"Decimal value is "<<value<<endl;

    system("pause");
    return 0;
}

double power(double x,int n){
    double var=1.0;
    while(n--)
        var*=x;
    return var;
}
