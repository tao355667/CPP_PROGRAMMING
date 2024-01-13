#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s1 = "面向对象", s2 = "程序设计";
    cout << s1 << s2 << endl;
    s1 += s2;
    cout << s1 << endl;
    return 0;
}
