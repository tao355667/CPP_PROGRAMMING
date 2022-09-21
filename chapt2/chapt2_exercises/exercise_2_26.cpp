/*
习题2-26 P62
实现一个简单的菜单程序，运行时显示“Menu:A(dd)D(elete)S(ort)Q(uit)Select one:”
提示用户的输入，A表示增加，D表示删除，S表示排序，Q表示退出，输入为A、D、S时分别提示
“数据已经增加、删除、排序。”输入为Q时程序结束。
（1）要求使用if...else语句进行判断，用break、continue控制程序流程
（2）要求使用switch语句
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    unsigned char user_input;
    while(1)//死循环
    {
        cout<<"Menu:A(dd)D(elete)S(ort)Q(uit)Select one:"<<endl;
        cin>>user_input;
        if(user_input!='Q'){//输入不为Q，打印对应信息
            switch(user_input)
            {
                case 'A':
                    cout<<"数据已经增加。"<<endl;
                    break;
                case 'D':
                    cout<<"数据已经删除。"<<endl;
                    break;
                case 'S':
                    cout<<"数据已经排序。"<<endl;
                    break;
            }
        }else break;//输入为Q，跳出死循环
        
    }
    system("pause");
    return 0;
}
