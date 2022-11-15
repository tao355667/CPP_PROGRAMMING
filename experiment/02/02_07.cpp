#include <iostream>
#include <cmath>
using namespace std;

class Segment
{
public:
    // 构造函数，初始化线段起点坐标(xx1, yy1)，终点坐标(xx2, yy2)，长度length
    Segment(float xx1 = 0.0, float yy1 = 0.0, float xx2 = 1.0, float yy2 = 1.0)
        : x1(xx1), y1(yy1), x2(xx2), y2(yy2)
    {
        length = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        count++;
    }
    // 复制构造函数，初始化线段起点坐标(xx1, yy1)，终点坐标(xx2, yy2)，长度length
    Segment(Segment &seg)
        : x1(seg.x1), y1(seg.y1), x2(seg.x2), y2(seg.y2), length(seg.length) { count++; }
    // 将线段起点平移到(newX, newY)
    void moveTo(float newX, float newY)
    {
        x1 = newX;
        y1 = newY;
        length = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    }
    float getx1() { return x1; }       // 返回x1
    float gety1() { return y1; }       // 返回y1
    float getx2() { return x2; }       // 返回x2
    float gety2() { return y2; }       // 返回y2
    double getLen() { return length; } // 返回线段的长度
    // 判断与另一条线段的长度是否相等
    bool isEqual(Segment &s)
    {
        if (length == s.length)
            return true;
        else
            return false;
    }
    int show()
    { // 显示目前已创建的Point对象数
        cout << "count=" << count << endl;
        return 1;
    }
    //~Segment() { /*count--;*/ }                           //析构函数

private:
    float x1, y1, x2, y2; // 线段起点坐标(x1, y1)和终点坐标(x2, y2)
    double length;        // 线段的长度
    static int count;     //记录线段的个数
};

int Segment::count = 0;

int main()
{
    Segment s1(1, 1, 4, 4), s2;
    s2.show();
    cout << "the length of s1:" << s1.getLen() << endl;
    cout << "the length of s2:" << s2.getLen() << endl;
    cout << "s1.length==s2.length?" << s2.isEqual(s1) << endl;

    s1.moveTo(3, 3);
    cout << "the length of s1:" << s1.getLen() << endl;
    cout << "the length of s2:" << s2.getLen() << endl;
    cout << "s1.length==s2.length?" << s2.isEqual(s1) << endl;

    Segment s3(s1);
    s3.show();

    for (int i = 0; i < 4; i++)
    {
        Segment tmp(s1);
        tmp.show();
    }
    return 0;
}
