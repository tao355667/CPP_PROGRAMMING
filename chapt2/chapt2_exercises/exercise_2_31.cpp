/*
习题2-31 P63
输出九九乘法表
*/
#include<stdio.h>
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    for(int i=1;i<=9;i++){//共9行
        for(int j=1;j<=i;j++){
            cout<<i<<"*"<<j<<"="<<i*j<<"\t";//每行的信息
        }
        cout<<endl;//每行结束要换行
    }
    
    system("pause");
    return 0;
}
