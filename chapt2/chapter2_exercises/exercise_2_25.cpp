/*
习题2-25 编写一个完整的程序，运行时向用户提问“你考试考了多少分？（0~100）",
接收输入后判断其等级并显示出来。规则如下：
优  90<=分数<=100
良  80<=分数<=90
中  60<=分数<=80
差  0<=分数<=60

*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int score;
    while(1)
    {
        cout<<"你考试考了多少分？（0~100）"<<endl;
        cin>>score;
        if(score>=90 && score<=100){
            cout<<"您的等级为：优"<<endl;
        }else if(score>=80 && score<=90){
            cout<<"您的等级为：良"<<endl;
        }else if(score>=60 && score<=80){
            cout<<"您的等级为：中"<<endl;
        }else if(score>=0 && score<=60){
            cout<<"您的等级为：差"<<endl;
        }
    }
    
    system("pause");
    return 0;
}
