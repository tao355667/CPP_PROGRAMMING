/*
习题5-07 P188
定义一个Cat类，拥有静态数据成员numOfCats，记录Cat的个体数目；
静态成员函数getNumOfCats()，读取numOfCats。
设计程序测试这个类，体会静态数据成员和静态成员函数的用法。
*/
#include <iostream>
using namespace std;
// Cat类
class Cat
{
private:
    static int numOfCats;

public:
    Cat() { numOfCats++; }       //构造函数
    Cat(Cat &c) { numOfCats++; } //复制构造函数
    ~Cat() { numOfCats--; }      //析构函数
    static void getNumOfCats()
    {
        cout << "numOfCats=" << numOfCats << endl;
    }
};
int Cat::numOfCats = 0;
int main()
{
    Cat c1, c2;
    Cat::getNumOfCats(); // 2个Cat对象
    for (int i = 0; i < 5; i++)
    { // 定义的Cat对象在每层循环的末尾都会湮灭，所以每次输出的numOfCats都不变
        Cat cc;
        Cat::getNumOfCats();
    }
    Cat c3, c4, c5;
    Cat::getNumOfCats(); // 3个Cat对象
    system("pause");
    return 0;
}