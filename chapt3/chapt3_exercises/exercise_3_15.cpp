/*
习题3-15 P97
编写递归函数getPower计算x的y次方,在同一个程序中针对整型和实型实现两个重载函数:
int getPower(int x,int y);  //整型版本,当y<0时返回0
double getPower(double x,int y);  //实型版本
在主程序中实现输入输出,分别输入一个整数a和一个实数b作为底数,
再输入一个整数m作为指数,输出a的m次方和b的m次方.
另外请读者思考,如果在调用getPower函数计算a的m次方时希望得到一个实型结果
(实型结果表示范围更大,而且可以准确表示m<0时的结果),该如何调用?
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//整型版本,当y<0时返回0
int getPower(int x,int y){
    if(y<0) return 0;
    else if(y==0) return 1;
    else return x*getPower(x,y-1);
}
//实型版本
double getPower(double x,int y){
    if(y<0) return 0;
    else if(y==0) return 1;
    else return x*getPower(x,y-1);
}
// //整型版本,支持负次幂
double getPower_1(int x,int y){
    if(y<0) return 1.0/x*getPower_1(x,y+1);
    else if(y==0) return 1;
    else return x*getPower_1(x,y-1);
}
//实型版本,支持负次幂
double getPower_1(double x,int y){
    //cout<<x<<y;
    if(y<0) return getPower_1(x,y+1)/x;
    else if(y==0) return 1;
    else return x*getPower_1(x,y-1);
}
int main()
{
    //输入
    int a,m;
    double b;
    cout<<"请输入一个整数a和一个实数b作为底数: ";
    cin>>a>>b;
    cout<<"请输入一个整数m作为指数: ";
    cin>>m;
    //输出值
    cout<<"a^m="<<getPower(a,m)<<endl;
    cout<<"b^m="<<getPower(b,m)<<endl;
    //输出值
    cout<<"负次幂:"<<endl;
    cout<<"a^(-m)="<<getPower_1(a,-m)<<endl;
    cout<<"b^(-m)="<<getPower_1(b,-m)<<endl;
    system("pause");
    return 0;
}
