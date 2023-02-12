/*
8-2 P311
将单目运算符“++”重载为成员函数的形式
*/
#include <iostream>
using namespace std;
class Clock
{ //时钟类定义
public:
    Clock(int hour = 0, int minute = 0, int second = 0);
    void showTime() const;
    Clock &operator++();   //前置单目运算符重载
    Clock operator++(int); //后置单目运算符重载
private:
    int hour, minute, second;
};

Clock::Clock(int hour, int minute, int second)
{
    if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    else
        cout << "Time error!" << endl;
}
void Clock::showTime() const
{ //显示时间
    cout << hour << ":" << minute << ":" << second << endl;
}
Clock &Clock::operator++()
{
    second++;
    if (second >= 60)
    {
        second -= 60;
        minute++;
        if (minute >= 60)
        {
            minute -= 60;
            hour = (hour + 1) % 24;
        }
    }
    return *this;
}
Clock Clock::operator++(int)
{ //注意形参表中的整型参数
    Clock old = *this;
    ++(*this); //调用前置“++”运算符
    return old;
}
int main()
{
    Clock myClock(23, 59, 59);
    cout << "First time output: ";
    myClock.showTime();
    cout << "Show myClock++: ";
    (myClock++).showTime();
    cout << "Show ++myClock: ";
    (++myClock).showTime();
    return 0;
}