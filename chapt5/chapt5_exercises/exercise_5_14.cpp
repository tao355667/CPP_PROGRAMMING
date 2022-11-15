/*
习题5-14 P188
定义Boat与Car两个类，二者都有weight属性，定义一个二者的友元函数getTotalWeight()，计算二者的重量和
*/
#include <iostream>
using namespace std;
class Car;
class Boat
{
    friend int getTotalWeight(Boat b, Car c);

public:
    Boat(int w) : weight(w) {}

private:
    int weight;
};
class Car
{
    friend int getTotalWeight(Boat b, Car c);

public:
    Car(int w) : weight(w) {}

private:
    int weight;
};
//计算二者的重量和
int getTotalWeight(Boat b, Car c)
{
    return b.weight + c.weight;
}
int main()
{
    Car c(12);
    Boat b(98);
    cout << "sum of weight = " << getTotalWeight(b, c) << endl;
    system("pause");
    return 0;
}