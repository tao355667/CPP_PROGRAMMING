#include <iostream>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int x1 = 0, int y1 = 0) : x(x1), y(y1) {}
    int get(){return x + y;}
};
class Circle
{
    Point center;
    int radius;
    public:
    Circle(int cx,int cy,int r=1):center(cx,cy),radius(r){}
    int get(){return center.get()+radius;}
};
int main()
{
    Circle c1(1,2,3),c2(4,5);
    cout<<c1.get()<<endl;
    cout<<c2.get()<<endl;
    return 0;
}