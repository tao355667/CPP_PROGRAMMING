#include <iostream>
using namespace std;
int main()
{
    int v[4] = {};
    for (int i = 0; i < 3; ++i)
        v[i] = i * i * i;
    for (auto e : v)
        cout << e;
    cout << endl;
    return 0;
}
