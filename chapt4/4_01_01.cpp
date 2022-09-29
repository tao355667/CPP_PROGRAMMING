/*
4-1-1 P108
时钟类的完整程序-补充了构造函数
*/
#include<iostream>
#include<cstdlib>
using namespace std;
class Clock{    //时钟类的定义
    public:     //外部接口，公有成员函数
        Clock(int newH,int newM,int newS);  //构造函数
        void setTime(int newH,int newM,int newS);
        void showTime();
    private:    //私有数据成员
        int hour,minute,second;
};
//时钟类成员函数的具体实现
void Clock::setTime(int newH,int newM,int newS){
    hour=newH;
    minute=newM;
    second=newS;
}

inline void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}
//构造函数的实现
Clock::Clock(int newH,int newM,int newS):hour(newH),minute(newM),second(newS)
{}
int main()
{
    Clock c(0,0,0);
    c.showTime();
    c.setTime(8,30,30);
    c.showTime();
    system("pause");
    return 0;
}
