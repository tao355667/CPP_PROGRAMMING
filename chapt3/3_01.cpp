/*
3-1 P66
编写一个求x的n次方的函数
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//求x的n次方函数
double power(double x,int n){
    double var=1.0;
    while(n--)
        var*=x;
    return var;
}
//便于理解的等效函数
double myPower(double x,int n){
    double var=1.0;
    while(n){
        var=var*x;
        n--;
    }
    return var;
}

int main()
{
    //输出5的2次方的结果
    cout<<"5 to the power 2 is "<<power(5,2)<<endl;
    cout<<"5 to the power 2 is "<<myPower(5,2)<<"(myPower)"<<endl;
    system("pause");
    return 0;
}
