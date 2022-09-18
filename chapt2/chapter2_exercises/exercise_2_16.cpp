/*
习题2-16 C++语言有哪几种数据类型？简述其值域。编程显示你使用的计算机中的各种数据的字节数
书上表格：
=====================================================================
类型名                      字节数          取值范围
=====================================================================
bool                        1               false,true
---------------------------------------------------------------------
char                        1               -128~127
signed char                 1               -128~127
unsigned char               1               0~255
short                       2               -32768~32767
unsigned short              2               0~65535
int                         4               -2^31~2^31-1
unsigned int                4               0~2^32-1
long                        4               -2^31~2^31-1
unsigned long               4               0~2^32-1
long long                   8               -2^63~2^63-1
unsigned long long          8               0~2^64-1
---------------------------------------------------------------------
float                       4               3.4*10^(-38)~3.4*10^38
double                      8               1.7*10(-308)~1.7*10^308
long double                 8               1.7*10(-308)~1.7*10^308
=====================================================================
程序输出结果：
bool字节数：1
char字节数：1
signed char字节数：1
unsigned char字节数：1
short字节数：2
unsigned short字节数：2
int字节数：4
unsigned int字节数：4
long字节数：4
unsigned long字节数：4
long long字节数：8
unsigned long long字节数：8
float字节数：4
double字节数：8
long double字节数：16
long double在我的计算机上为16字节，与书上不同，其余相同
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    cout<<"bool字节数："<<sizeof(bool)<<endl;
    cout<<"char字节数："<<sizeof(char)<<endl;
    cout<<"signed char字节数："<<sizeof(signed char)<<endl;
    cout<<"unsigned char字节数："<<sizeof(unsigned char)<<endl;
    cout<<"short字节数："<<sizeof(short)<<endl;
    cout<<"unsigned short字节数："<<sizeof(unsigned short)<<endl;
    cout<<"int字节数："<<sizeof(int)<<endl;
    cout<<"unsigned int字节数："<<sizeof(unsigned int)<<endl;
    cout<<"long字节数："<<sizeof(long)<<endl;
    cout<<"unsigned long字节数："<<sizeof(unsigned long)<<endl;
    cout<<"long long字节数："<<sizeof(long long)<<endl;
    cout<<"unsigned long long字节数："<<sizeof(unsigned long long)<<endl;
    cout<<"float字节数："<<sizeof(float)<<endl;
    cout<<"double字节数："<<sizeof(double)<<endl;
    cout<<"long double字节数："<<sizeof(long double)<<endl;

    system("pause");
    return 0;
}
