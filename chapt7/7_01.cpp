/*
7-1 P257
Rectangle类公有继承Point类
派生类Rectangle就包含了它的全部基类中的所有非静态成员（除了构造和析构函数）。
*/
#include <iostream>
using namespace std;
class Point
{
public:
    Point(float xx = 0, float yy = 0) : x(xx), y(yy) {}
    void initPoint(float x = 0, float y = 0)
    {
        this->x = x;
        this->y = y;
    }
    void move(float offX, float offY)
    {
        x += offX;
        y += offY;
    }
    void show() { cout << "this is Point's Show:" << x << y << endl; }
    float getX() const { return x; }
    float getY() const { return y; }

private:
    float x, y;
};
class Rectangle : public Point
{
public:
    void initRectangle(float x = 0, float y = 0, float w = 0, float h = 0)
    {
        initPoint(x, y);
        this->w = w;
        this->h = h;
    }
    void show() { cout << "this is Rectangle's Show:" << w << h << endl; }
    float getW() const { return w; }
    float getH() const { return h; }

private:
    float w, h;
};
int main()
{
    Rectangle r1;
    r1.initRectangle(1, 1, 3.0, 4.0);
    r1.move(2, 1);
    cout << r1.getX() << ',' << r1.getY() << ',' << r1.getW() << ',' << r1.getH() << endl;
    r1.show();
    return 0;
}