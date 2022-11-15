#include <iostream>
#include <cmath>
using namespace std;
class A
{
public:
    A(int xx) : x(xx) { count++; }
    //11111111111111111111111111
    A(const A &b)
    {
        x = b.x;
        count++;
    }
    ~A() { count--; }
    static void print();

private:
    int x;
    //222222222222222222222222222222
    static int count;
};
//33333333333333333
int A::count=0;
void A::print()
{
cout<<count<<endl;
}
int main()
{
    A a1(2);
    A::print();
    const A a2(3);
    A::print();
    //44444444444444444444444
    const A &a3 = a2;
    A::print();
    A a4(a2);
    A::print();
    return 0;
}