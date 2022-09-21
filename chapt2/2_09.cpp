/*
2-9 P51
编写程序输出以下图案:
      *
    ***
  *****
*******
*****
***
*
修改N可控制形状的大小
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    const int N=4;
    for(int i=1;i<=N;i++){//前N行
        for(int j=1;j<=30;j++)//空30列
            cout<<" ";
        for(int j=1;j<=2*N-2*i;j++)//空格
            cout<<" ";
        for(int j=1;j<=2*i-1;j++)//*,与行数(i)有关
            cout<<"*";
        cout<<endl;
    }
    for(int i=1;i<=N-1;i++){//后N-1行
        for(int j=1;j<=30;j++)//空30列
            cout<<" ";
        for(int j=1;j<=2*N-1-2*i;j++)//*,与行数(i)有关
            cout<<"*";
        cout<<endl;
    }

    system("pause");
    return 0;
}