#include <iostream>
using namespace std;
class XCF
{
    int a;

public:
    XCF(int aa = 0) : a(aa) { cout << 1; }
    XCF(XCF &x)
    {
        a = x.a;
        cout << 2;
    }
    ~XCF() { cout << a; }
    int Geta() { return a; }
};

int main()
{
    XCF d1(5), d2(d1);
    cout << d2.Geta();
    return 0;
}