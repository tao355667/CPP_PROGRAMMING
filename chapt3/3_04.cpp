/*
3-4 P68
寻找并输出11~999的数m，它满足m、m^2和m三次方均为回文数。
回文数：正着写和倒着写一样，例：121、676、94249
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//判断N是否为回文数
bool symn(unsigned N);

int main()
{
    for(unsigned m=11;m<=999;m++){
        if(symn(m) && symn(m*m) && symn(m*m*m)){
            cout<<"m="<<m<<ends;
            cout<<"m*m="<<m*m<<ends;
            cout<<"m*m*m="<<m*m*m<<endl;
        }
    }
    system("pause");
    return 0;
}

bool symn(unsigned N){
    unsigned i=N;//用i计算反转后的值
    unsigned reverseN=0;//存储反转后的数值
    while(i>0){
        reverseN=i%10+reverseN*10;//乘10加个位数
        i/=10;
    }
    return reverseN==N;
}
