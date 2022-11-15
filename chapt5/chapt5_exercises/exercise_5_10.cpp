/*
习题5-10 P188
静态成员变量可以为私有的吗？声明一个私有的静态整型成员变量
答：可以
*/
#include <iostream>
using namespace std;
class A
{
public:
    A() { count++; }
    ~A() { count--; }
    //通过静态成员函数访问静态数据成员，如此可不依赖对象，而是通过类名访问静态数据成员
    static void showCount()
    {
        cout << "A::count=" << count << endl;
    }

private:
    static int count; //私有静态数据成员
};
int A::count = 0; //私有静态数据成员初始化

int main()
{
    A::showCount();
    A a[10];
    A::showCount();
    A b[10];
    A::showCount();

    system("pause");
    return 0;
}