/*
2-4 输入一个0~6的整数,转换为星期输出
0为星期天
1~6为星期一~星期六
*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int day;
    cin>>day;

    switch(day){//对星期数进行判断
        case 0:
            cout<<"Sunday"<<endl;
            break;
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        default:
            cout<<"Day out of range Sunday...Saturday"<<endl;
            break;
    }
    system("pause");
    return 0;
}
