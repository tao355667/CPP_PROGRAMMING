/*
下面程序在定义分数（fract）类的基础上，重载复合赋值运算符"+="。请将程序补充完整，使程序运行时的输出结果为41/28。

注意：仅允许在指定的下划线处填写代码，不得改动程序中的其他内容（需删除下划线部分）。
试题源程序：
*/
#include <iostream>
using namespace std;

class fract
{
    int den; //分子
    int num; //分母
public:
    fract(int d = 0, int n = 1) : den(d), num(n) {}
    fract &operator+=(const fract &);
    /**********FILL**********/
    void show(){ cout << den << '/' << num << endl; }
};

/**********FILL**********/
fract & fract::operator+=(const fract &f)
{
    this->den = this->den * f.num + this->num * f.den;
    this->num *= f.num;
    /**********FILL**********/
    return *this;
}

int main()
{
    fract fr(3, 4), fr2(5, 7);
    /**********FILL**********/
    fr+=fr2;
    fr.show();
    return 0;
}
