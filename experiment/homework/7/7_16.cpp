#include <iostream>

using namespace std;

class A
{

public:
    void display()
    {

        cout << "This is Class A!" << endl;
    }

private:
    int x, y;
};

class B : public A
{

public:
    void display()
    {

        cout << "This is Class B!" << endl;
    }

private:
    int i, j;
};

int main()
{

    A a1;

    B b1;

    b1.display();

    a1 = b1;

    a1.display();

    A &rf = b1;

    rf.display();

    A *p;

    B b;

    p = &b;

    p->display();

    return 0;
}