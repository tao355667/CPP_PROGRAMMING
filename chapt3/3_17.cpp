/*
3-17 P88
从键盘输入一个角度值，求出该角度的正弦值、余弦值和正切值
*/
#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
const double PI=3.14159265358979;
int main()
{
    //输入角度
    double angle;
    cout<<"Please enter an angle: ";
    cin>>angle;
    //计算结果并输出
    double redian=angle*PI/180;
    cout<<"sin("<<angle<<")="<<sin(redian)<<endl;
    cout<<"cos("<<angle<<")="<<cos(redian)<<endl;
    cout<<"tan("<<angle<<")="<<tan(redian)<<endl;

    system("pause");
    return 0;
}
