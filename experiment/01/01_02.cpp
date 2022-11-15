#include<iostream>
using namespace std;

int main()
{
    int i=5;
    cout<<i++<<endl;
    cout<<++i<<endl;
    cout<<(++i)++<<endl;
    cout<<i<<endl;
    cout<<(i++,++i,i*3)<<endl;
    return 0;
}
