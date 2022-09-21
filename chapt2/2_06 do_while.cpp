/*
2-6 P46
输入一个整数,将各位数字反转后输出
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,right_digit;
    cout<<"Enter the number:";
    cin>>n;

    do{
        right_digit=n%10;//提取个位数(最右边的数字)(模10)
        cout<<right_digit;
        n/=10;//提取之后,将个位数剔除(除以10取整)
    }while(n!=0);
    cout<<endl;

    system("pause");
    return 0;
}
