/*
3-12 P79
使用引用传递修改3-11，将两个整数交换次序后输出？
引用是一种特殊类型的变量，可以被认为是另一个变量的别名
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//使用引用将两个整数交换次序
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}

int main()
{
    int x=5,y=10;
    cout<<"x="<<x<<"   y="<<y<<endl;
    swap(x,y);
    cout<<"x="<<x<<"   y="<<y<<endl;

    system("pause");
    return 0;
}
