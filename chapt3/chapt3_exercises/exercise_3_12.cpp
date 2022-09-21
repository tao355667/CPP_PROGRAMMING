/*
习题3-12 P97
在主函数中提示输入整数n，编写函数用递归的方法求1+2+3+...+n的值
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//求1+2+3+...+n
int plusfun(int n){
    if(n==1) return 1;
    else return n+plusfun(n-1);
}

int main()
{
    //输入整数
    int n;
    cout<<"请输入一个整数n: "<<endl;
    cin>>n;
    //输出1+2+3+...+n的值
    cout<<"1+2+3+...+n的值为: "<<plusfun(n)<<endl;
    
    system("pause");
    return 0;
}
