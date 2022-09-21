/*
习题2-19 P61
运行下面程序，观察其输出，体会i++和++i的区别
相同之处：执行i++和++i之后，i的值都会+1
不同之处：i++表达式表示i+1前的值，++i表达式表示i+1之后的值
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int myAge=39;
    int yourAge=39;
    cout<<"I am:"<<myAge<<" years old."<<endl;
    cout<<"You are:"<<yourAge<<" years old."<<endl;
    myAge++;
    ++yourAge;
    cout<<"One year passes..."<<endl;
    cout<<"I am:"<<myAge<<" years old"<<endl;
    cout<<"You are:"<<yourAge<<" years old."<<endl;
    cout<<"Another year passes..."<<endl;
    cout<<"I am:"<<myAge++<<" years old"<<endl;
    cout<<"You are:"<<++yourAge<<" years old."<<endl;   
    cout<<"Let's print it again."<<endl;
    cout<<"I am:"<<myAge<<" years old."<<endl;
    cout<<"You are:"<<yourAge<<" years old."<<endl;

    system("pause");
    return 0;
}
