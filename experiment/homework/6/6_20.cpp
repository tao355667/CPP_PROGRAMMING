#include <iostream>
using namespace std;
class XCF
{
    int a;

public:
    XCF(int aa = 0) : a(aa) { cout << "1"; }
    XCF(XCF &x)
    {
        a = x.a;
        cout << "2";
    }
    ~XCF() { cout << a; }
    int Geta() { return a; }
};
int main()
{
    XCF dl(5), d2(dl);
    XCF *pd = new XCF(8);
    cout << pd->Geta();
    delete pd;
    return 0;
}