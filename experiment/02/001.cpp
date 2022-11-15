#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

class Point
{
private:
    int m_x;
    int m_y;

public:
    Point(int x, int y) : m_x(x), m_y(y)
    {
        cout << "Point的初始化列表构造函数调用" << m_x << " " << m_y << endl;
    }
    ~Point()
    {
        cout << "Point的析构函数调用" << m_x << " " << m_y << endl;
    }
    Point(Point &P)
    {
        m_x = P.m_x;
        m_y = P.m_y;
        cout << "Point的拷贝构造函数调用" << m_x << " " << m_y << endl;
    }
    int getX()
    {
        return m_x;
    }
    int getY()
    {
        return m_y;
    }
};

class Line
{
private:
    Point m_s, m_e;

public:
    Line(Point s, Point e) : m_s(s), m_e(e)
    {
        cout << "Line的初始化列表构造函数调用" << endl;
    }
    Line(Line &L) : m_s(L.m_s), m_e(L.m_e)
    {
        cout << "Line的拷贝构造函数调用" << endl;
    }
    ~Line()
    {
        cout << "Line的析构函数调用" << endl;
    }
    double getDis()
    {
        double x = double(m_s.getX() - m_e.getX());
        double y = double(m_s.getY() - m_e.getY());
        return sqrt(x * x - y * y);
    }
};

int main()
{
    Point p1(1, 2), p2(3, 4);
    cout << "---------------------" << endl;
    Line L1(p1, p2);
    cout << "---------------------" << endl;
    Line L2(L1);
    return 0;
}
