/*
习题3-10 P97
编写函数求两个整数的最大公约数和最小公倍数
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//最大公约数，辗转相除法，递归
int maxDivisor(int a,int b){
    int x,y;
    x=a/b;y=a%b;
    
    if(y==0) return b;
    else return maxDivisor(b,y);
}
//最大公约数，更相减损术，递归
int maxDivisor_1(int a,int b){
    int x;
    static int s=1;//存储2^(个数)
    //可半者半之
    if(a%2==0 && b%2==0){
        a=a/2;
        b=b/2;
        s=s*2;
    }
    //不可半者，副置分母、子之数，以少减多，更相减损，
    if(a>b) x=a-b;
    else if(a<b) x=b-a;
    //求其等也。以等数约之。
    if(b==x) return s*x;
    else return maxDivisor_1(b,x);
}
//最小公倍数，两数乘积=最大公约数*最小公倍数
int minMultiple(int a,int b){
    return a*b/maxDivisor(a,b);
}

int main()
{
    //输入整数
    int a,b;
    cout<<"Pleasr enter two integers(a and b): "<<endl;
    cin>>a>>b;
    //输出最大公约数-辗转相除法
    cout<<"The greatest common divisor of two numbers is "<<maxDivisor(a,b)<<"（辗转相除法）"<<endl;
    //输出最小公倍数
    cout<<"The least common multiple of two numbers is "<<minMultiple(a,b)<<endl;
    //输出最大公约数-更相减损术
    cout<<"The greatest common divisor of two numbers is "<<maxDivisor_1(a,b)<<"（更相减损术）"<<endl;
    system("pause");
    return 0;
}
