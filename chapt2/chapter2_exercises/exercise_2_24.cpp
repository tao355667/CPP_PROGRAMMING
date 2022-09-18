/*
习题2-24 编写一个完整的程序，实现功能：
向用户提问“现在正在下雨吗？”，提示用户输入Y或N。若输入为Y，显示“现在正在下雨。”；
若输入为N，显示“现在没有下雨。”；否则继续提问“现在正在下雨吗？”。
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    unsigned char isRain;
    do{
        cout<<"现在正在下雨吗？（请输入Y/N）"<<endl;
        cin>>isRain;
        if(isRain=='Y') cout<<"现在正在下雨。"<<endl;
        else if(isRain=='N') cout<<"现在没有下雨。"<<endl;
    }while(isRain!='Y'&&isRain!='N');
    
    system("pause");
    return 0;
}
