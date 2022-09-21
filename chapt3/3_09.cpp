/*
3-9 P75
用递归法计算从n个人中选择k个人组成一个委员会的不同组合数
递归式：
C(n,k)=C(n-1,k)+C(n-1,k-1)
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

//求n的阶乘
int comn(int n,int k){
    if(n==k || k==0) return 1;
    else return comn(n-1,k)+comn(n-1,k-1);
}

int main()
{
    int n,k;
    cout<<"Please enter twointegers n and k: ";
    cin>>n>>k;
    cout<<"C(n,k)="<<comn(n,k)<<endl;

    system("pause");
    return 0;
}
