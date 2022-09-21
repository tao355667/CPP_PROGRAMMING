/*
3-3 P67
编写公式求pi的值，公式如下：
pi=16*arctan(1/5)-4*arctan(1/239)
arctan用如下级数计算：
arctan(x)=x - (x^3)/3 + (x^5) -(x^7)/7 + ...
直到级数某项绝对值不大于10^(-15)为止；pi和x均为double型
每一位的数乘其相应的权，求和
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//计算arctan(x)
double arctan(double x);
double myArctan(double x);

int main()
{
    double a=16.0*arctan(1/5.0);
    double b=4.0*arctan(1/239.0);
    cout<<"PI="<<a-b<<"  arctan()"<<endl;
    //注意：因为整数相除结果取整，如果参数写1/5，1.239，结果就是0
    //我的函数
    double mya=16.0*myArctan(1/5.0);
    double myb=4.0*myArctan(1/239.0);
    cout<<"PI="<<mya-myb<<"  myArctan()"<<endl;
    system("pause");
    return 0;
}

double myArctan(double x){
    double sqr=x*x;
    double e=x;
    double r=0;
    int i=1;
    int flag=1;//符号
    while(e/i>1E-15)
    {
        double f=e/i;
        r+=flag*f;
        flag=-flag;//符号取反
        e*=sqr;
        i+=2;
    }
    return r;
}
double arctan(double x){
        double sqr=x*x;
    double e=x;
    double r=0;
    int i=1;
    while(e/i>1E-15)
    {
        double f=e/i;
        r=(i%4==1)?r+f:r-f;
        e*=sqr;
        i+=2;
    }
    return r;
}