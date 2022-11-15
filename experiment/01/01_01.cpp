#include<iostream>
using namespace std;

int main()
{
    cout<<sizeof 'a'<<" "<<sizeof "a"<<" "<<endl;
    char tmp[]="Hello World";
    tmp[5]='0';
    cout<<tmp<<endl;
    tmp[5]=0;
    cout<<tmp<<endl;
    return 0;
}