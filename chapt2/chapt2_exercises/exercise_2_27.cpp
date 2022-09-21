/*
习题2-27 P62
用穷举法找出1~100的质数并显示出来。分别使用while、do...while、for循环语句实现
质数：除了1和自身无其他因子
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int num=1,flag;
    //while
    cout<<"while"<<endl;
    while(num<=100)
    {
        flag=0;
        for(int i=1;i<=num;i++){
            if(num%i==0){
                if(i!=num && i!=1) flag++; //每有一个除1和num的因子则flag++
            }
        }
        if(!flag) cout<<num<<ends;//flag为0的数就是质数
        num++;
    }
    cout<<endl;
    //do...while
    cout<<"do...while"<<endl;
    num=1;
    do{
        flag=0;
        for(int i=1;i<=num;i++){
            if(num%i==0){
                if(i!=num && i!=1) flag++; //每有一个除1和num的因子则flag++
            }
        }
        if(!flag) cout<<num<<ends;//flag为0的数就是质数
        num++;
    }while(num<=100);
    cout<<endl;
    //for
    cout<<"for"<<endl;
    for(num=1;num<=100;num++){
        flag=0;
        for(int i=1;i<=num;i++){
            if(num%i==0){
                if(i!=num && i!=1) flag++; //每有一个除1和num的因子则flag++
            }
        }
        if(!flag) cout<<num<<ends;//flag为0的数就是质数
    }

    cout<<endl;
    system("pause");
    return 0;
}
