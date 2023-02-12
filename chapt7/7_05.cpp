/*
7-5 P269
派生类析构函数举例（多继承，含有内嵌对象）
对例7-4进行修改
*/
#include <iostream>
using namespace std;
class Base1
{
public:
    Base1(int i) { cout << "Constructing Base1 " << i << endl; }
    ~Base1() { cout << "Destructing Base1" << endl; };
};

class Base2
{
public:
    Base2(int i) { cout << "Constructing Base2 " << i << endl; }
    ~Base2() { cout << "Destructing Base2" << endl; };
};
class Base3
{
public:
    Base3() { cout << "Constructing Base3 *" << endl; }
    ~Base3() { cout << "Destructing Base3" << endl; };
};
class Derived : public Base2, public Base1, public Base3
{ //基类构造顺序Base2,Base1，Base3
public:
    Derived(int a, int b, int c, int d) : Base1(a), m2(d), m1(c), Base2(b) {}
    //基类Base1和Base2调用有参数的构造函数，基类Base3调用无参数的构造函数（默认构造函数）
    //对象m1和m2调用有参数的构造函数，对象m3调用无参数的构造函数

    // Derived类中无析构函数，系统会自动生成默认析构函数
    //析构顺序与构造顺序严格相反
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
