/*
习题4-12 P148
定义一个DataType（数据类型）类，能处理包含字符型、整型、浮点型三种类型的数据，
给出其构造函数
*/
#include<iostream>

using namespace std;
//DataType类
class DataType{
    private:
        int myint;
        char mychar;
        float myfloat;
    public:
        DataType(){}//默认构造函数
        DataType(int a){//构造函数
            myint=a;
        }
        DataType(char a){//构造函数
            mychar=a;
        }
        DataType(float a){//构造函数
            myfloat=a;
        }
};

int main()
{

    getchar();//程序暂停
    return 0;
}
