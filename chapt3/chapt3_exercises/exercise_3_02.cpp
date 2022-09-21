/*
习题3-2 P96
观察下面程序的运行输出，与你设想的有何不同？仔细体会引用的用法
输出：
intOne: 5
rSomeRef:       5

intOne: 8
intTwo: 8
rSomeRef:       8
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int intOne;
    int &rSomeRef=intOne;

    intOne=5;
    cout<<"intOne:\t"<<intOne<<endl;
    cout<<"rSomeRef:\t"<<rSomeRef<<endl;

    int intTwo=8;
    rSomeRef=intTwo;
    cout<<"\nintOne:\t"<<intOne<<endl;
    cout<<"intTwo:\t"<<intTwo<<endl;
    cout<<"rSomeRef:\t"<<rSomeRef<<endl;

    system("pause");
    return 0;
}
