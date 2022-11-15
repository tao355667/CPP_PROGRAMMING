/*
5-1 P152
作用域实例
*/
#include<iostream>
using namespace std;

int i;  //全局变量，文件作用域

int main()
{
    i=5;       //为全局变量i赋值
    {           //子块1
        int i;  //局部变量，局部作用域
        i=7;    
        cout<<"i="<<i<<endl;    //输出7，全局变量i被隐藏了（不可见）
    }    
    cout<<"i="<<i<<endl;        //输出5

    getchar();//程序暂停
    return 0;
}
