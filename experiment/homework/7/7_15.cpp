#include <iostream>
using namespace std;
class Base
{
public:
    void print() { cout << "Base"; }
};

class Derived : public Base
{
public:
    void print(){ cout << "Derived"; }
};
int main()
{
    Base b;
    b.print();
    Derived d;
    d.print();
    return 0;
}