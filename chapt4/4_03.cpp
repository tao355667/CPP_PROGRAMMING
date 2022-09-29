/*
4-3 P117
游泳池改造预算，Circle类
*/
#include<iostream>
#include<cstdlib>

using namespace std;
const float PI=3.141593;            //圆周率PI的值
const float FENCE_PRICE=35;         //栅栏的单价
const float CONCRETE_PRICE=20;      //过道水泥单价
//Circle类
class Circle{                       //声明定义类Circle及其数据和方法
    public:                         //外部接口
        Circle(float r);            //构造函数
        float circumference();      //计算圆的周长
        float area();               //计算圆的面积
    private:                        //私有数据成员
        float radius;               //圆的半径
};
//构造函数
Circle::Circle(float r):radius(r)
{}
//圆的周长
float Circle::circumference(){
    return 2*PI*radius;
}
//圆的半径
float Circle::area(){
    return PI*radius*radius;
}
int main()
{
    //用户输入数据
    float radius;
    cout<<"Enter the radius of the pool:";//提示用户输入数据
    cin>>radius;
    //定义泳池边界和栅栏对象
    Circle pool(radius);        //游泳池边界
    Circle poolRim(radius+3);   //栅栏对象
    //计算栅栏造价并输出
    float fenceCost=poolRim.circumference()*FENCE_PRICE;
    cout<<"Fencing Cost is $ "<<fenceCost<<endl;
    //计算过道造价并输出
    float concreteCost=(poolRim.area()-pool.area())*CONCRETE_PRICE;
    cout<<"Concrete Cost is $ "<<concreteCost<<endl;

    system("pause");
    return 0;
}
