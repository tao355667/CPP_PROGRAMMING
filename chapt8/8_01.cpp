/*
8-1 P309
复数类加减法运算重载——成员函数形式
*/
#include <iostream>
using namespace std;
class Complex //复数类
{
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator+(const Complex &c2) const; //运算符+重载的成员函数
    Complex operator-(const Complex &c2) const; //运算符-重载的成员函数
    void display() const;                       //显示复数的值
private:
    double real;
    double imag;
};
Complex Complex::operator+(const Complex &c2) const
{
    return Complex(real + c2.real, imag + c2.imag); //创建一个临时对象作为返回值，这里调用了Complex类的构造函数
}
Complex Complex::operator-(const Complex &c2) const
{
    return Complex(real - c2.real, imag - c2.imag); //创建一个临时对象作为返回值，这里调用了Complex类的构造函数
}
void Complex::display() const
{ //显示复数中的内容
    cout << "(" << real << "," << imag << ")" << endl;
}
int main()
{
    Complex c1(5, 4), c2(2, 10), c3; //定义复数类的对象
    cout << "c1=";
    c1.display();
    cout << "c2=";
    c2.display();
    c3 = c1 - c2; //使用重载运算符完成复数减法
    cout << "c3=c1-c2=";
    c3.display();
    c3 = c1 + c2; //使用重载运算符完成复数加法
    cout << "c3=c1+c2=";
    c3.display();
    return 0;
}