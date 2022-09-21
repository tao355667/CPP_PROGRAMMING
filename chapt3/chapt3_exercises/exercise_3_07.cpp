/*
习题3-7 P97
完成函数，参数为两个unsigned short int型数，返回值为第一个参数除以第二个参数的结果，数据类型为short int；
如果第二个参数为0，则返回值为-1.在主程序中实现输入输出。
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//函数
short int myfun(unsigned short int a,unsigned short int b){
    if(b==0) return -1;
    return a/b;
}

int main()
{
    unsigned short int a,b;
    cout<<"Pleasr enter two integers(a and b): "<<endl;
    cin>>a>>b;
    cout<<"ans is "<<myfun(a,b)<<endl;
    
    system("pause");
    return 0;
}
