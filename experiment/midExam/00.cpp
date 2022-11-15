#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    Point(int x = 0, int y = 0) : x(x), y(y) { count++; }
    // Point(Point &p)
    // {
    //     x = p.x;
    //     y = p.y;
    //     count++;
    // }
    //构造函数形参应写为常引用，常引用可绑定到常对象或普通对象
    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
        count++;
    }
    ~Point() { count--; }
    int getX() { return x; }
    int getY() { return y; }
    static void showCount()
    {
        cout << "current count=" << count << endl;
    }
    //将get_dist()在Point类内声明为友元函数后，可在函数内通过对象访问私有数据成员
    friend double get_dist(Point p1, Point p2); 
    void print()
    {
        cout << "x=" << x << "\t"
             << "y=" << y << endl;
    }
    //常对象不可访问普通成员函数，可访问常成员函数。可在类内再定义一个功能类似的const成员函数，系统会根据对象的类型自动选择对应的成员函数（重载）
    void print()const
    {
        cout << "x=" << x << "\t"
             << "y=" << y << endl;
    }

private:
    int x, y;
    static int count; //静态数据在类内声明，类外初始化
};
int Point::count = 0; //静态数据在类内声明，类外初始化

//函数的定义在声明之后。
//将get_dist()在Point类内声明为友元函数后，可在函数内通过对象访问私有数据成员
double get_dist(Point p1, Point p2)
{
    double tmp_x = p1.x - p2.x;
    double tmp_y = p1.y - p2.y;
    return sqrt(tmp_x * tmp_x + tmp_y * tmp_y);
}


int main()
{
    Point::showCount();
    Point p1;
    Point p2(p1);
    Point p3(3, 4);
    Point::showCount();
    cout << "the distence is:" << get_dist(p3, p1) << endl;
    Point p4(10, 11);
    p4.print();
    const Point p5(66, 6);
    p5.print(); //常对象不可访问普通成员函数，可访问常成员函数。可在类内再定义一个功能类似的const成员函数，系统会根据对象的类型自动选择对应的成员函数（重载）
    Point p6(p5);
    p6.print();
    Point::showCount();
    return 0;
}