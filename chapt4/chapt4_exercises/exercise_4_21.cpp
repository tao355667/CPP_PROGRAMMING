/*
习题4-21 P149
在下面的枚举类型中，BLUE的值是多少？
enum Color{WHITE,BLACK=100,RED,BLUE,GREEN=300};
答：是102
*/
#include<iostream>
using namespace std;

enum Color{WHITE,BLACK=100,RED,BLUE,GREEN=300};

int main()
{
    cout<<"WHITE="<<WHITE<<endl;
    cout<<"BLACK="<<BLACK<<endl;
    cout<<"RED="<<RED<<endl;
    cout<<"BLUE="<<BLUE<<endl;
    cout<<"GREEN="<<GREEN<<endl;

    getchar();//程序暂停
    return 0;
}
