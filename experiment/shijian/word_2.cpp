/*
请改正程序中指定位置的错误，使程序的输出结果如下：
4, 5
4, 5, 20

注意：只允许修改注释“ERROR”的下一行，不得改动程序中的其他内容，也不允许增加或删减语句。
源程序：
*/
#include <iostream>
using namespace std;

class A
{
    /**********ERROR 1**********/
public:
    int n, m;

public:
    void set(int a, int b)
    {
        m = a;
        n = b;
    }
    void show() { cout << m << ", " << n << endl; }
};

/**********ERROR 2**********/
class B : public A
{
    int s;

public:
    void set() { s = m * n; }
    void shows() { cout << m << ", " << n << ", " << s << endl; }
};

int main()
{
    B b;
    /**********ERROR 3**********/
    b.A::set(4, 5);
    b.show();
    b.set();
    /**********ERROR 4**********/
    b.shows();
    return 0;
}
