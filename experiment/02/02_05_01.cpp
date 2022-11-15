#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point()
    {
        x = 1;
        y = 1;
    }
    Point(int tx, int ty)
    {
        x = tx;
        y = ty;
    }
    ~Point() { cout << "Point " << x << ',' << y << " is deleted." << endl; }
};

int main()
{
    Point obj1;
    Point obj2(10, 20);

    return 0;
}