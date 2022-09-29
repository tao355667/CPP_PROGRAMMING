/*
4-1-2 P109
默认构造函数，委托构造函数
*/
#include<iostream>
#include<cstdlib>
using namespace std;
//时钟类
class Clock{
    public:
        Clock(int newH,int newM,int newS);  //构造函数
        Clock();                            //默认构造函数
        Clock(int x);                       //委托构造函数，将小时初始化为x
        void setTime(int newH,int newM,int newS);
        void showTime();
    private:
        int hour,minute,second;
};
//构造函数
Clock::Clock(int newH,int newM,int newS):hour(newH),minute(newM),second(newS)
{}
//默认构造函数
Clock::Clock():hour(0),minute(0),second(0)
{}
// //默认构造函数-委托构造函数
// Clock::Clock():Clock(0,0,0)
// {}
//委托构造函数
Clock::Clock(int x):Clock(x,0,0)
{}
//设置时间
void Clock::setTime(int newH,int newM,int newS){
    hour=newH;
    minute=newM;
    second=newS;
}
//显示时间
inline void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

int main()
{
    Clock c1(1,0,0);
    Clock c2;
    Clock c3(8);
    c1.showTime();
    c2.showTime();
    c3.showTime();

    system("pause");
    return 0;
}
