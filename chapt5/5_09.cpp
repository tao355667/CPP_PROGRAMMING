/*
5-9 P169
常引用做形参
*/
#include<iostream>
#include<cmath>
using namespace std;

class Point{    //Point类
    public:
        Point(int x=0,int y=0):x(x),y(y){}
        int getX(){return x;}
        int getY(){return y;}
        friend float dist(const Point &p1,const Point &p2);//友元函数形参为常引用
    private:
        int x,y;
};
//dist函数中，无需修改两个传入对象的值，因此将传参方式改为传递常引用更合适，
//这样，调用dist函数时，就可以用常对象作为其参数
float dist(const Point &p1,const Point &p2)
{
    double x=p1.x-p2.x;
    double y=p1.y-p2.y;
    return static_cast<float>(sqrt(x*x+y*y));
}

int main()
{
    const Point myp1(1,1),myp2(4,5);
    cout<<"The distence is: ";
    cout<<dist(myp1,myp2)<<endl;

    system("pause");//程序暂停
    return 0;
}
