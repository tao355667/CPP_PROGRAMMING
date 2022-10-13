/*
习题4-09 P148
设计并测试一个名为Rectangle的矩形类，其属性为矩形的左下角与右上角两个点的坐标，能计算矩形的面积
*/
#include<iostream>

using namespace std;
//点类
class Point{
    private:
        double x;
        double y;
    public:
        Point(double xx=0,double yy=0){//构造函数
            x=xx;y=yy;
        }
        double getX(){//返回x坐标值
            return y;
        }
        double getY(){//返回y坐标值
            return x;
        }
};
//矩形类
class Rectangle{
    private:
        Point p1;
        Point p2;
    public:
        Rectangle(Point p11,Point p22);//构造函数
        double area();//求面积函数
};
//矩形类构造函数
Rectangle::Rectangle(Point p11,Point p22):p1(p11),p2(p22){}
//矩形类面积函数
double Rectangle::area()
{
    double ans=(p1.getX()-p2.getX())*(p1.getY()-p2.getY());
    if(ans<0)
        return -ans;
    else
        return ans;
}
int main()
{
    Point p1(1.1,1.2),p2(4.5,5);
    Rectangle rect1(p1,p2);
    cout<<"两对角点坐标为："
        <<"( "<<p1.getX()<<" , "<<p1.getY()<<" )"
        <<"( "<<p2.getX()<<" , "<<p2.getY()<<" )"
        <<endl;
    cout<<"矩形面积为："<<rect1.area()<<endl;
    getchar();//程序暂停
    return 0;
}
