/*
2-5 P45
求自然数1~10的和
while
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    cout<<"sum="<<sum<<endl;
    system("pause");
    return 0;
}
