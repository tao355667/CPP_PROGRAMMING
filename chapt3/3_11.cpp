/*
3-11 P78
将两个整数交换次序后输出？（其实并没有交换）
原因：采用的是值传递，传递的是实参的值。
形参值的改变对实参不起作用
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//使用引用将两个整数交换次序？
void swap(int a,int b){
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
