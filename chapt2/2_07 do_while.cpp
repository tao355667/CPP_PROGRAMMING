/*
2-7 用do...while语句编程,求1~10的和
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i=1,sum=0;

    do{
        sum=sum+i;
        i++;
    }while(i<=10);
    cout<<"sum="<<sum<<endl;

    system("pause");
    return 0;
}
