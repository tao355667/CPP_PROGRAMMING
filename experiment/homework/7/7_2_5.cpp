#include <iostream>

using namespace std;

class XX
{

    int xx;

public:
    XX() : xx(0) { cout << 'A'; }

    XX(int n) : xx(n) { cout << 'B'; }
};

class YY : public XX
{

    int yy;

public:
    YY() : yy(0) { cout << yy; }

    YY(int n) : XX(n + 1), yy(n) { cout << yy; }

    YY(int m, int n) : XX(m), yy(n) { cout << yy; }
};

main()
{

    YY y1(0, 0);
    cout << endl;
    YY y2(1);
    cout << endl;
    YY y3(0);
    cout << endl;
    YY y4;
}