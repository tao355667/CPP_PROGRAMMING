#include<iostream>
using namespace std;

int main()
{
    int a(2),b(3),c=9;
    cout<<a<<"\t"<<b<<'\t'<<c<<endl;
    if(a>b || ++c==9){
    	cout<<a<<"\t"<<b<<'\t'<<c<<endl;
	}
	cout<<a<<"\t"<<b<<'\t'<<c<<endl;
    return 0;
}
