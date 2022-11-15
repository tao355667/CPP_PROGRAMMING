/*
习题5-04 P188
假设有两个无关的类Engine和Fuel，使用时，怎样允许Fuel成员访问Engine中的私有和保护成员
答：将Fuel类声明为Engine类的友元
*/
#include <iostream>
using namespace std;

class Engine
{
    friend class Fuel;

private:
    int a = 100;

protected:
    int b = 200;
};

class Fuel
{
private:
    Engine E;

public:
    void show() { cout << "a=" << E.a << " b=" << E.b << endl; }
};

int main()
{
    Fuel F;
    F.show();
    system("pause");
    return 0;
}