/*
完善程序, 使其运行时的输出结果如下 :
f1 function of derive
f2 function of base
f4 function of base
*/

#include <iostream>
using namespace std;

class base
{
public:
    /*____(1)____*/ virtual void f1() { cout << "f1 function of base" << endl; }
    virtual void f2() { cout << "f2 function of base " << endl; }
    // void f2(int x) { cout << "f2 x function of derive " << endl; }
    void f4() { cout << "f4 function of base " << endl; }
};

class derive : public base
{
public:
    void f1() { cout << "f1 function of derive" << endl; }
    void f2(int x) { cout << "f2 function of derive " << endl; }
    void f4() { cout << "f4 function of derive" << endl; }
};

int main()
{
    base *p;
    /*____(2)____*/ derive obj;
    /*____(3)____*/ p = &obj;
    p->f1();
    p->f2();
    p->f4();
    return 0;
}