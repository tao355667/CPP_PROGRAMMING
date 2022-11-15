#include<iostream>
using namespace std;

void ShowScore()
{
	double a;
	cout<<"你考了多少分？(0~100)"<<endl;
    cin>>a;
    if(a>=90 && a<=100)
    	cout<<"等级=优秀"<<endl;
    if(a>=80 && a<90)
    	cout<<"等级=良好"<<endl;
    if(a>=60 && a<80)
    	cout<<"等级=中等"<<endl;
    if(a>=0 && a<60)
    	cout<<"等级=差"<<endl;
}

int main()
{
    ShowScore(); 
    
	return 0;
}
