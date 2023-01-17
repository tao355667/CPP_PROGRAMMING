
#include <iostream>

using namespace std;

class AA
{

public:
    AA() { cout << '1'; }
};

class BB : public AA
{

    int k;

public:
    BB() : k(0) { cout << '2'; }

    BB(int n) : k(n) { cout << '3'; }
};

int main()
{

    BB b(4), c;

    return 0;
}