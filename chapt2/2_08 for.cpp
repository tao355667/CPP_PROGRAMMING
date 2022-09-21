/*
2-8 P50
输入一个整数,求出他的所有因子
穷举法,对1~n的全部整数进行判断,凡是能够整除n的均为n的因子(余数为0)
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter a positive integer:";
    cin>>n;
    cout<<"Number "<<n<<" Factors ";

    for(int i=1;i<=n;i++){
        if(n%i==0)
            cout<<i<<ends;
    }
    cout<<endl;
    
    system("pause");
    return 0;
}
