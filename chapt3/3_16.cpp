/*
3-16 P87
编写两个名为sumOfSquare的重载函数，分别求两整数的平方和及两实数的平方和。
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int sumOfSquare(int a ,int b){
    return a*a+b*b;
}
double sumOfSquare(double a ,double b){
    return a*a+b*b;
}
int main()
{
    int m,n;
    cout<<"Enter two integers: ";
    cin>>m>>n;
    cout<<"Their sum of square: "<<sumOfSquare(m,n)<<endl;

    double x,y;
    cout<<"Enter two real numbers: ";
    cin>>x>>y;
    cout<<"Their sum of square: "<<sumOfSquare(x,y)<<endl;

    system("pause");
    return 0;
}
