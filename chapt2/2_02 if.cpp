/*
2-2 输入一个年份,判断其是否是闰年
1582年以来的置闰规则：
普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。
世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。
*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int year;
    bool isLeapYear;
    //输入要测试的年份
    cout<<"Enter the year:";
    cin>>year;
    //判断该年份是否为闰年
    isLeapYear=((year%4==0 && year%100!=0)||(year%400==0));
    //根据判断结果输出对应结论
    if(isLeapYear)/*如果是闰年*/
    {
        cout<<"is a leap year."<<endl;
    }
    else/*不是闰年*/
    {
        cout<<"is not a leap year."<<endl;
    }
    system("pause");
    return 0;
}
