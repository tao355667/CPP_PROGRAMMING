/*
7-4 P266
派生类构造函数举例（多继承，含有内嵌对象）
*/
#include <iostream>
using namespace std;
class Base1
{
public:
    Base1(int i) { cout << "Constructing Base1 " << i << endl; }
};
class Base2
{
public:
    Base2(int i) { cout << "Constructing Base2 " << i << endl; }
};
class Base3
{
public:
    Base3() { cout << "Constructing Base3 *" << endl; }
};
class Derived : public Base2, public Base1, public Base3
{ //基类构造顺序Base2,Base1，Base3
public:
    Derived(int a, int b, int c, int d) : Base1(a), m2(d), m1(c), Base2(b) {}
    //基类Base1和Base2调用有参数的构造函数，基类Base3调用无参数的构造函数（默认构造函数）
    //对象m1和m2调用有参数的构造函数，对象m3调用无参数的构造函数
private:
    //对象构造顺序为m1，m2，m3
    Base1 m1;
    Base2 m2;
    Base3 m3;
};
int main()
{
    Derived obj(1, 2, 3, 4);
    return 0;
}
