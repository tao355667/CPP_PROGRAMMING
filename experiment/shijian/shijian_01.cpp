#include <iostream>
using namespace std;
class Base
{
public:
    virtual void virt()
    {
        cout << "this is virt of Base!!!" << endl;
    }
    Base()
    {
        cout << "Base---constructor" << endl;
        virt();
    }
    ~Base()
    {
        cout << "Base---destructor" << endl;
        virt();
    }
};
class Derived : public Base
{
public:
    void virt()
    {
        cout << "this is virt of Derived!!!" << endl;
    }
    Derived()
    {
        cout << "Derived---constructor" << endl;
        virt();
    }
    ~Derived()
    {
        cout << "Derived---destructor" << endl;
        virt();
    }
};
int main()
{
    Derived d1;
    Base b1=d1;
    // system("pause");
    return 0;
}