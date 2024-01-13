#include <iostream>
using namespace std;
int a = 2;

int main()
{
    int a(10);
    {
        int a;
        a = 20;
        ::a = 5;
        cout << "a=" << a << endl;
    }
    cout << "a=" << a << endl;
    cout << "a=" << ::a << endl;
    return 0;
}
