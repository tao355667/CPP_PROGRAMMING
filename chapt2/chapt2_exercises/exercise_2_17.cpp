/*
习题2-17 P61
输出ASCII码为32~127的字符
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    for(unsigned char i=32;i<=127;i++){
        cout<<i<<ends;
    }
    cout<<endl;
    system("pause");
    return 0;
}
