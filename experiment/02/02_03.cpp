#include <iostream>
using namespace std;

class Test
{
    int x, y;

public:
    Test(int i = 0, int j = 0) //构造函数不应该有返回值类型
    {
        x = i;
        y = j;
    }
    void show();
};                //类定义末尾未加分号
void Test::show() //应该对类Test的成员函数进行定义
{
    cout << "x=" << x << ",y=" << y << endl;
}
int main() // C++程序的主函数必须有返回值
{
    Test a;
    a.show();
    Test b(1);
    b.show();
    Test c(2, 4);
    c.show();

    return 0;
}
