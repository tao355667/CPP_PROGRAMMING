#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point(int xx = 0, int yy = 0);
    Point(Point &p);
};
Point::Point(int xx, int yy) : x(xx), y(yy)
{
    cout << "Calling constructor of Point!" << endl;
}
Point::Point(Point &p)
{
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor of Point!" << endl;
}

void test1()
{
    Point p1(3, 4);
    Point p2(p1);
    Point p3;

    cout << "\ntest1 end\n";
}

void test2()
{
    Point p1(3, 4);
    Point p2;
    p2 = p1;
    Point p3;

    cout << "\ntest2 end\n";
}

int main()
{
    test1();
    test2();
    return 0;
}