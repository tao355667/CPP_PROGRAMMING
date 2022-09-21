/*
3-6 P70
掷骰子的随机游戏
一次投两个骰子，求和
第一次：
7、11胜。2、3、12负。其他情况记下点数为x，继续
之后：
若和数与x相同则胜；
若和数为7则失败。
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

//掷骰子函数，计算和数，输出和数
int rollDice(){
    int die1=1+rand()%6;
    int die2=1+rand()%6;
    int sum=die1+die2;
    cout<<"player rolled "<<die1<<"+"<<die2<<"="<<sum<<endl;
    return sum;
}
enum GameStatus{WIN,LOSE,PLAYING};//枚举
int main()
{
    int sum,myPoint;
    GameStatus status;

    unsigned seed;
    cout<<"Please enter an unsigned integer:";
    cin>>seed;//输入种子
    srand(seed);

    sum=rollDice();
    switch(sum){
        case 7:     //如果和数为7或11则为胜，状态为WIN
        case 11:
            status=WIN;
            break;
        case 2:     //和数为2、3或12则为负，状态为LOSE
        case 3:
        case 12:
            status=LOSE;
            break;
        default:     //其他情况，游戏尚无结果，状态为PLAYING，记下点数，为下一轮做准备
            status=PLAYING;
            myPoint=sum;
            cout<<"point is "<<myPoint<<endl;
    }

    while(status==PLAYING){     //只要状态仍未PLAYING，就继续进行下一轮
        sum=rollDice();
        if(sum==myPoint)        //某轮的和数等于点数则取胜，状态置为WIN
            status=WIN;
        else if(sum==7)         //出现和数为7则为负，状态置为LOSE
            status=LOSE;
    }

    if(status==WIN)
        cout<<"player wins"<<endl;
    else
        cout<<"player loses"<<endl;
    
    system("pause");
    return 0;
}
