/*
习题3-14 P97
用递归的方法编写函数求n阶勒让德多项式的值,公式为:
funP(n,x)=(x*(2*n-1)*funP(n-1,x)-(n-1)*funP(n-2,x))/n
funP(1,x)=x
funP(0,x)=1
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//求Fibonacci级数
double funP(unsigned n,double x){
    //cout<<n<<ends;//打印调试信息
    if(n==0) return 1;
    else if(n==1) return x;
    else return (  x*(2*n-1)*funP(n-1,x)  -  (n-1)*funP(n-2,x)  )/n;
}

int main()
{
    //输入
    unsigned n;
    double x;
    cout<<"请输入一个整数n和一个浮点数x: "<<endl;
    cin>>n>>x;
    //输出n阶勒让德多项式的值
    cout<<"F(n): "<<funP(n,x)<<endl;
    
    system("pause");
    return 0;
}
