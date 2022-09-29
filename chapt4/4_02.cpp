/*
4-2 P112
复制构造函数
*/
#include<iostream>
#include<cstdlib>
using namespace std;
//Point类
class Point{
    public:                         //外部接口
        Point(int xx=0,int yy=0){   //构造函数
            x=xx;y=yy;
        }
        Point(Point &p);            //复制构造函数
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
    private:
        int x,y;
};
//复制构造函数的实现
Point::Point(Point &p){
    x=p.x;
    y=p.y;
    cout<<"Calling the copy constructor"<<endl;
}
//形参为Point类对象的函数
void fun1(Point p){
    cout<<p.getX()<<","<<p.getY()<<endl;
}
//返回值为Point类对象的函数
Point fun2(){
    Point a(1,2);
    return a;
}
int main()
{
    Point a(4,5);       //第一个对象a
    Point b{a};          //情况一，用a初始化b。第一次调用复制构造函数
    cout<<b.getX()<<","<<b.getY()<<endl;
    fun1(b);            //情况二，对象作为fun1的实参。第二次调用复制构造函数
    b=fun2();           //情况三，函数的返回值是类对象，函数返回时，调用复制构造函数
    cout<<b.getX()<<","<<b.getY()<<endl;
    system("pause");
    return 0;
}
