/*
习题2-18 运行下面程序，观察其输出，与你的设想是否相同？
设想：
Difference is:50

Now difference is:4294967246
程序输出结果与设想相同
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    unsigned int x;
    unsigned int y=100;
    unsigned int z=50;
    x=y-z;
    cout<<"Difference is:"<<x<<endl;
    x=z-y;
    cout<<"\nNow difference is:"<<x<<endl;

    system("pause");
    return 0;
}
