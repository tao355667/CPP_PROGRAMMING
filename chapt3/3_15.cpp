/*
3-15 P85
带默认形参值的函数举例
本程序的功能是计算长方形的体积。子函数getVolume是计算体积的函数，
有3个形参：length（长）、width（宽）、height（高），其中width和height带有默认值。
主函数中以不同形式调用getVolume函数，分析程序的运行结果。
*/
#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

int getVolume(int length,int width=2,int height=3);

int main()
{
    const int X=10,Y=12,Z=15;
    cout<<"Some box data is ";
    cout<<getVolume(X,Y,Z)<<endl;
    cout<<"Some box data is ";
    cout<<getVolume(X,Y)<<endl;
    cout<<"Some box data is ";
    cout<<getVolume(X)<<endl;
    
    system("pause");
    return 0;
}

int getVolume(int length,int width/*=2*/,int height/*=3*/){
    cout<<setw(5)<<length<<setw(5)<<width<<setw(5)<<height<<'\t';
    return length*width*height;
}