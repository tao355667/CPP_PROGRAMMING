/*
4-9  P137
设某次体育比赛的结果有四种可能：胜（WIN）、负（LOSE）、平局（TIE）、比赛取消（CANCEL），
编写程序顺序输出这四种情况
*/
#include<iostream>
using namespace std;

enum GameResult{WIN,LOSE,TIE,CANCEL};

int main()
{
    GameResult result;              //声明变量时，可以不写关键字enum
    enum GameResult omit=CANCEL;    //也可以在类型名前写关键字enum

    for(int count=WIN;count<=CANCEL;count++)//隐含类型转换
    {
        result=GameResult(count);//显式类型转换
        if(result==omit)
            cout<<"The game was cancelled"<<endl;
        else
        {
            cout<<"The game was played ";
            if(result==WIN)
                cout<<"and we won!";
            if(result==LOSE)
                cout<<"and we lost.";
            cout<<endl;
        }
    }

    getchar();//程序暂停
    return 0;
}
