#include <iostream>
using namespace std;
class CD
{
public:
    ~CD() { cout << 'C'; }

private:
    char name[80];
};
int main()
{
    CD a, *b, d[2];
    return 0;
}
