#include<iostream>
using namespace std;

int main()
{
    int var1(9),var2{var1};
    double var3=3.1415926;
    bool var4=false;
    char var5='0';
    cout<<var1<<" "<<var2<<" "<<var3<<" "<<var4<<" "<<var5<<" "<<endl;
    
	var1=var3;
	cout<<var1<<endl;
	var4=var2-10;
	cout<<var4<<endl;

	return 0;
}
