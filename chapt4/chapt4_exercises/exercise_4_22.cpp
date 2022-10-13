/*
习题4-22 P149
声明枚举类型Weekday，包括SUNDAY到SATURDAY七个元素在程序中声明weekday类型的变量，
对其赋值，声明整型变量，看看能否对其赋Weekday类型的值
*/
#include<iostream>
using namespace std;

enum Weekday{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDY,FRIDAY,SATURDY};

int main()
{
    Weekday d(SUNDAY);//这里是初始化
    cout<<"Weekday d(SUNDAY);\t";cout<<"//d="<<d<<endl;
    d=MONDAY;      //合法
    cout<<"d=MONDAY;\t\t";cout<<"//d="<<d<<endl;
    d=(Weekday)2;  //合法，将2转换为枚举元素
    //d=2;  //不合法，右值必须是枚举元素（常量）
    cout<<"d=2;\t\t\t//不合法，右值必须是枚举元素（常量）"<<endl;
    cout<<"d=(Weekday)2;\t\t";cout<<"//d="<<d<<endl;

    int a;
    a=SUNDAY;       //合法
    cout<<"a=SUNDAY;\t\t";cout<<"//a="<<a<<endl;
    a=d;            //合法
    cout<<"a=d;\t\t\t";cout<<"//a="<<a<<endl;

    getchar();//程序暂停
    return 0;
}
