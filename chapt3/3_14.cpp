/*
3-14 P83
内联函数应用举例
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

const double PI=3.14159265358979;

//内联函数，根据圆的半径计算其面积
inline double calArea(double radius){
    return PI*radius*radius;
}
int main()
{
    double r=3.0;   //r是圆的面积
    //调用内联函数求圆的面积，编译时此处被替换为calArea函数体语句
    //展开为area=PI*radius*radius;
    double area=calArea(r);
    cout<<area<<endl;
    
    system("pause");
    return 0;
}

