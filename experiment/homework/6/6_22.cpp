#include <iostream>
using namespace std;
int main()
{
    int a[6] = {23, 15, 64, 33, 40, 58};
    int s1, s2;
    s1 = s2 = a[0];
    for (int *p = a + 1; p < a + 6; p++)
    {
        if (s1 > *p)
            s1 = *p;
        if (s2 < *p)
            s2 = *p;
    }
    cout << s1 + s2 << endl;
    return 0;
}