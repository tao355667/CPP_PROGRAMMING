/*
5-3 P155
具有静态、动态生存期对象的时钟程序
*/
#include<iostream>
using namespace std;

class Clock{
    private:
        int hour,minute,second;
    public:
        Clock();//默认构造函数
        void setTime(int newH,int newM,int newS);//设置时间
        void showTime();//显示时间
        ~Clock();//析构函数
};
//Clock类的函数实现
//构造函数
Clock::Clock():hour(0),minute(0),second(0){}
//设置时间函数
void Clock::setTime(int newH,int newM,int newS)
{
    hour=newH;
    minute=newM;
    second=newS;
}
//显示时间函数
void Clock::showTime()
{
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}
//析构函数
Clock::~Clock(){}

Clock globClock;//声明对象globClock，具有静态生存期，文件作用域
//由默认构造函数初始化为0:0:0
int main()
{
    cout<<"First time output:"<<endl;
    //引用具有文件作用域的对象globClock
    globClock.showTime();   //对象的成员函数具有类作用域
    //显示0:0:0
    globClock.setTime(8,30,30);//将时间设置为8:30:30

    Clock myClock(globClock);//声明具有块作用域的对象myClock
    //调用复制构造函数,以globClock为初始值
    cout<<"Second time output: "<<endl;
    myClock.showTime();//引用具有块作用域的对象myClock
    //输出8：30：30

    system("pause");//程序暂停
    return 0;
}
