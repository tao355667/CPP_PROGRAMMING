/*
安装cmake，mingw后，在VSCode的TERMINAL输入命令：
//先到这三个文件所在的文件夹
cd chapt5
cd 5_10  
//编译链接
g++ -g .\5_10.cpp .\Point.cpp -o my5_10
//此时文件夹中就会有my5_10.exe文件，输入指令执行：
.\my5_10.exe
*/
#include"Point.h"
#include<iostream>
using namespace std;

int main()
{
    Point a(4,5);
    cout<<"Point A: "<<a.getX()<<", "<<a.getY();
    Point::showCount();

    Point b(a);
    cout<<"Point B: "<<b.getX()<<", "<<b.getY();
    Point::showCount();

    return 0;
}