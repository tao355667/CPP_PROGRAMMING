/*
习题2-28 P62
比较break语句与continue语句的不同用法
break：跳出循环体/switch
continue：跳出本次循环
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++){
        if(i%2==0) continue;    //i为偶数跳出此次循环
        if(i>=8) break;         //i大于8跳出循环
        cout<<i<<ends;
    }
    //最后输出1 3 5 7
    system("pause");
    return 0;
}
