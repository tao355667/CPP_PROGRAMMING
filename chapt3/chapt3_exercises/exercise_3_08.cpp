/*
习题3-8 P97
编写函数把华氏温度转换为摄氏温度，公式：
C=5*(F-32)/9
在主程序中提示用户输入一个华氏温度，转化后输出相应的摄氏温度。
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//华氏温度转换为摄氏温度函数
double CtoF(double F){
    return 5*(F-32)/9;
}

int main()
{
    //输入华氏温度
    double F;
    cout<<"Please enter a temperature in Fahrenheit: ";
    cin>>F;
    //输出摄氏温度
    cout<<"The temperature in Celsius is "<<CtoF(F)<<endl;
    system("pause");
    return 0;
}
