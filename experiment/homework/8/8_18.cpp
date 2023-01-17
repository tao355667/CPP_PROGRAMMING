#include <iostream>
using namespace std;
class Instrument
{
public:
    virtual void Display() = 0;
};
class Piano : public Instrument
{
public:
    void Display()
    { /*函数体程序略*/
    }
};
int main()
{
    //Instrument s;//抽象类不允许被实例化
    Instrument *p = 0;
}