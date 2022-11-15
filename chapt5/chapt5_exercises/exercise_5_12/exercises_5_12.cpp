/*
5-12 P188
在函数fn1()中定义一个静态变量n，fn1()中对n的值加1，在主函数中调用fn1()10次，显示n的值。

#简单多文件编译链接过程：
#安装mingw后，在VSCode的TERMINAL输入命令：
#先到这三个文件所在的文件夹
cd chapt5
cd chapt5_exercises
cd exercise_5_12
#编译链接
g++ -g .\exercises_5_12.cpp .\file_5_12.cpp -o exercises_5_12.exe
#此时文件夹中就会有exercises_5_12.exe文件，输入指令执行：
.\exercises_5_12.exe
*/
#include "file_5_12.h"
#include <iostream>
using namespace std;
extern int n;
int main()
{
    for (int i = 0; i < 10; i++)
        fn1(); // n自增1,输出n的值

    return 0;
}