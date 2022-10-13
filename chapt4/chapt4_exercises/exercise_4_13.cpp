/*
习题4-13 P148
定义并实现一个Circle类
*/
#include<iostream>

#define PI 3.1415926
using namespace std;
//Circle类
class Circle{
    private:
        double radius;
    public:
        Circle();//默认构造函数
        Circle(double r){//构造函数
            radius=r;
        }
        Circle(Circle &c){//赋值构造函数
            radius=c.radius;
        }
        double getArea(){//计算圆面积的函数
            return radius*radius*PI;
        }
};

int main()
{
    double r=5.5;
    Circle c1(r);
    cout<<"圆的半径为"<<r<<", 圆的面积为"<<c1.getArea()<<endl;
    getchar();//程序暂停
    return 0;
}
