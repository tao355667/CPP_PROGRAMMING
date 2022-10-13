/*
习题4-11 P148
定义并实现一个矩形类，有长、宽两个属性，有成员函数计算矩形的面积
*/
#include<iostream>

using namespace std;
//矩形类
class Rectangle{
    private:
        double width,length;
    public:
        Rectangle(){}//默认构造函数
        Rectangle(double w,double l){//构造函数
            width=w;length=l;
        }
        void SetRect(double w,double l){//修改矩形信息
            width=w;length=l;
        }
        double GetArea(){//输出矩形面积
            return width*length;
        }
};

int main()
{
    //矩形初始化
    Rectangle R(15.2,13.6);
    //输出矩形面积
    cout<<R.GetArea();

    getchar();//程序暂停
    return 0;
}
