/*
2-3 P42
比较两个数的大小
嵌套的if语句
if...else if语句
*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int X,Y;//定义变量
    cout<<"Enter X and Y:";//输出提示信息
    cin>>X>>Y;//输入要比较的数字
    //嵌套的if语句
    if(X!=Y)//X不等于Y时
        if(X>Y)
            cout<<X<<">"<<Y<<endl;
        else
            cout<<X<<"<"<<Y<<endl;
    else//X等于Y时
        cout<<X<<"="<<Y<<endl;
        
    //if...else if语句
    if(X>Y)
        cout<<X<<">"<<Y<<endl;
    else if(X==Y)
        cout<<X<<"="<<Y<<endl;
    else
        cout<<X<<"<"<<Y<<endl;

    system("pause");
    return 0;
}