/*
习题4-20 P149
定义一个负数类Complex，使得下面的代码能正常工作：
Complex c1(3,5);    //用复数3+5i初始化c1
Complex c2=4.5;     //用实数4.5初始化c2
c1.add(c2);         //将c1与c2相加，结果保存在c1中
c1.show();          //将c1输出（这时的结果应该是7.5+5i）
*/
#include<iostream>

using namespace std;

//Complex类
class Complex{
    private:
        double RealPart;        //实部
        double ImaginaryPart;   //虚部
    public:
        Complex(double re=0,double im=0):RealPart(re),ImaginaryPart(im){}
        void add(Complex c);//加c
        void sub(Complex c);//减c
        void mul(Complex c);//乘c
        void div(Complex c);//除以c
        void show(){//显示复数信息
            cout<<RealPart<<"+"<<ImaginaryPart<<"i"<<endl;
        }

};
//加c
void Complex::add(Complex c)
{
    RealPart += c.RealPart;
    ImaginaryPart += c.ImaginaryPart;
}
//减c
void Complex::sub(Complex c)
{
    RealPart -= c.RealPart;
    ImaginaryPart -= c.ImaginaryPart;
}
//乘c
void Complex::mul(Complex c)
{
    RealPart = RealPart*c.RealPart-ImaginaryPart*c.ImaginaryPart;
    ImaginaryPart = RealPart*c.ImaginaryPart+ImaginaryPart*c.RealPart;
}
//除以c
void Complex::div(Complex c)
{
    double x = c.RealPart/(c.ImaginaryPart*c.ImaginaryPart+c.RealPart*c.RealPart);
    double y = -c.ImaginaryPart/(c.ImaginaryPart*c.ImaginaryPart+c.RealPart*c.RealPart);
    Complex c3(x,y);
    mul(c3);
}
//测试程序1-书中P149
void test1()
{
    cout<<"test1: "<<endl;
    Complex c1(3,5);    //用复数3+5i初始化c1
    Complex c2=4.5;     //用实数4.5初始化c2
    c1.add(c2);         //将c1与c2相加，结果保存在c1中
    c1.show();          //将c1输出（这时的结果应该是7.5+5i）
    cout<<endl;
}
//测试程序2-自己的
void test2()
{
    cout<<"test2: "<<endl;
    Complex c1(3,5);
    cout<<"c1=";c1.show();
    Complex c2=4.5;

    cout<<"加4.5"<<endl;
    c1.add(c2);
    cout<<"c1=";c1.show();

    cout<<"减4.5"<<endl;
    c1.sub(c2);
    cout<<"c1=";c1.show();

    cout<<"乘4.5"<<endl;
    c1.mul(c2);
    cout<<"c1=";c1.show();

    cout<<"除以4.5"<<endl;
    c1.div(c2);
    cout<<"c1=";c1.show();
    cout<<endl;
}
int main()
{
    test1();//测试程序1-书中P149
    test2();//测试程序2-自己的

    getchar();//程序暂停
    return 0;
}
