/*
习题2-29 P63
在程序定义一个整型变量，赋以1~100的值，要求用户猜这个数，比较两个数的大小，
把结果提示给用户，直到猜对为止。分别使用while、do...while语句实现循环
*/
#include<stdio.h>
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    //while实现
    // srand(time(0));//初始化起始值，不加这个的话，每次执行程序获得的随机数是一样的
    // int num=rand()%100+1;
    // int guess;
    // cout<<num<<endl;//显示生成的数字（调试用）
    // while(1)
    // {
    //     cout<<"请猜数（1~100）"<<endl;
    //     cin>>guess;
    //     if(guess>num) cout<<"你猜的太大了！"<<endl;
    //     else if(guess<num) cout<<"你猜的太小喽！"<<endl;
    //     else{cout<<"你猜对了！"<<endl;break;}
    // }
    //while实现

    //do...while实现
    srand(time(0));//初始化起始值，不加这个的话，每次执行程序获得的随机数是一样的
    int num=rand()%100+1;
    int guess;
    cout<<num<<endl;//显示生成的数字（调试用）    
    do{
       cout<<"请猜数（1~100）"<<endl;
       cin>>guess;
        if(guess>num) cout<<"你猜的太大了！"<<endl;
        else if(guess<num) cout<<"你猜的太小喽！"<<endl;
        else{cout<<"你猜对了！"<<endl;break;}       
    }while(guess!=num);
    //do...while实现
    
    system("pause");
    return 0;
}
