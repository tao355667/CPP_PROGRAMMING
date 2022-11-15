#include <iostream>
using namespace std;

class Aton
{
    int X, Y;

protected:
    int zx, zy;

public:
    void init(int i, int j)
    {
        zx = i;
        zy = j;
    }
    Aton(int i, int j, int n = 0, int m = 0)
    {
        X = i, Y = j, zx = m, zy = n;
    }
    int getX() { return X; }
    int getY() { return Y; }
};
int main()
{
    Aton A(25, 20, 3, 5);
    A.init(5, 9);
    cout << A.getX() << endl;//X和Y均为private访问控制类型，无法在类外被直接访问，可通过类内函数访问
    cout << A.getY() << endl;
}
