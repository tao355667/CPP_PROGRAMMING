/*
3-5 P69
计算公式并输出结果（公式太麻烦不想打了，看书吧）
*/
#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
const double TINY_VALUE=1E-10;
//函数
double tsin(double x);
double funk(double r,double s);

int main()
{
    double k,r,s;
    //输入参数，计算
    cout<<"r=";
    cin>>r;
    cout<<"s=";
    cin>>s;
    k=funk(r,s);
    //输出结果
    cout<<k<<endl;
    system("pause");
    return 0;
}
double tsin(double x){
    double g=0;//返回值
    double t=x;//第一项
    int n=1;
    do{
        g+=t;//t是加了的最后一个
        n++;
        t=t*(-1)*x*x/(2*n-1)/(2*n-2);//第二项，第三项，第四项....
    }while(fabs(t)>=TINY_VALUE);//没加的第一个
    return g;
}
double funk(double r,double s){
    if(r*r<=s*s){
        return sqrt(tsin(r)*tsin(r)+tsin(s)*tsin(s));
    }else{
        return tsin(r*s)/2.0;
    }
}
