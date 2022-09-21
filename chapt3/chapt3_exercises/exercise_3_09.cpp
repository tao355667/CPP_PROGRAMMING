/*
习题3-9 P97
编写函数判别一个数是否是质数，在主程序中实现输入和输出
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//判断整数是否为质数
bool isPrime(unsigned num){
    if(num==1) return false;
    for(int i=1;i<=num;i++){
        if(num%i==0 && i != 1 && i != num) return false;
    }
    return true;
}

int main()
{
    //输入一个正整数
    unsigned num;
    cout<<"Please enter a positive integer: ";
    cin>>num;
    //输出结果
    if(isPrime(num)) cout<<"This number is prime"<<endl;
    else cout<<"This number is not prime"<<endl;
    
    system("pause");
    return 0;
}
