/*
4-4 P121
类的组合，线段（Line）类
*/
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
//Point类
class Point{
    public:                         //外部接口
        Point(int xx=0,int yy=0){   //构造函数
            x=xx;y=yy;
        }
        Point(Point &p);            //复制构造函数
        int getX(){return x;}
        int getY(){return y;}
    private:
        int x,y;
};
//Point复制构造函数的实现
Point::Point(Point &p){
    x=p.x;
    y=p.y;
    cout<<"Calling the copy constructor of Point"<<endl;
}
//类的组合
class Line{
    public:
        Line(Point xp1,Point xp2);
        Line(Line &l);
        double gerLen(){return len;}
    private:
        Point p1,p2;
        double len;
};
//组合类的构造函数
Line::Line(Point xp1,Point xp2):p1(xp1),p2(xp2){
    //p1=xp1;p2=xp2;
    cout<<"Calling constructor of Line"<<endl;
    double x=static_cast<double>(p1.getX()-p2.getX());
    double y=static_cast<double>(p1.getY()-p2.getY());
    len=sqrt(x*x+y*y);
}
//组合类的复制构造函数
Line::Line(Line &l):p1(l.p1),p2(l.p2){
    cout<<"Calling the copy constructor of Line"<<endl;
    len=l.len;
}
int main()
{
    //定义两个Point类的对象
    Point myp1(1,1),myp2(4,5);
    //用Point类的对象定义Line类的对象
    Line line(myp1,myp2);
    Line line2(line);
    cout<<"The length of the line is: ";
    cout<<line.gerLen()<<endl;
    cout<<"The length of the line2 is: ";
    cout<<line2.gerLen()<<endl;


    system("pause");
    return 0;
}
