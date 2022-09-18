/*
习题2-21 写出下列表达式的值
2<3 && 6<9
!(4<7)
!(3>5)||(6<2)
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    cout<<(2<3 && 6<9)<<endl;       //1
    cout<<(!(4<7))<<endl;           //0
    cout<<(!(3>5)||(6<2))<<endl;    //1
    
    system("pause");
    return 0;
}
