#include<iostream>
using namespace std;

void ShowNum()
{
	int a;
    cin>>a;
    cout<<dec<<"dec:"<<a<<endl;
	cout<<oct<<"oct:"<<a<<endl;
	cout<<hex<<"oct:"<<a<<endl;
}

int main()
{
    ShowNum(); 
    
	return 0;
}
