/*
5-6 P163
使用友元函数计算两点间的距离
*/
#include<iostream>
#include<cmath>//sqrt()
using namespace std;

class Point{    //Point类定义
    public:     //公有成员
        Point(int x=0,int y=0):x(x),y(y){}
        int getX(){return x;}
        int getY(){return y;}
        friend float dist(Point &p1,Point &p2);//友元函数声明
    private:    //私有成员
        int x,y;
};

float dist(Point &p1,Point &p2)//友元函数实现
{
    double x=p1.x-p2.x; //通过对象访问私有数据成员
    double y=p1.y-p2.y;
    return static_cast<float>(sqrt(x*x+y*y));
}
int main()
{
    Point myp1(1,1),myp2(4,5);
    cout<<"The distence is: ";
    cout<<dist(myp1,myp2)<<endl;
    
    system("pause");//程序暂停
    return 0;
}
