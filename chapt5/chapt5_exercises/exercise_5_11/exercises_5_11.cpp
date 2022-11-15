/*
5-11 P188
在一个文件中定义一个全局变量n，主函数main()，在另一个文件中定义函数fn1()，
在main()中对n赋值，再调用fn1()，在fn1()中也对n赋值，显示n最后的值。

#简单多文件编译链接过程：
#安装mingw后，在VSCode的TERMINAL输入命令：
#先到这三个文件所在的文件夹
cd chapt5
cd chapt5_exercises
cd exercise_5_11
#编译链接
g++ -g .\exercises_5_11.cpp .\file_5_11.cpp -o exercises_5_11.exe
#此时文件夹中就会有exercises_5_11.exe文件，输入指令执行：
.\exercises_5_11.exe
*/
#include "file_5_11.h"
#include <iostream>
using namespace std;
int n;
int main()
{
    n = 1; //对n赋值
    cout << "n=" << n << endl;
    fn1(); //再次对n赋值
    cout << "n=" << n << endl;
    return 0;
}