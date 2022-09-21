/*
3-13-1 P82
这个书上好像本来应该有例程，但没有出现在书上
含有可变数量形参的函数
initializer
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//形参为string
void print_err(initializer_list<string>lst){
    for(auto beg=lst.begin();beg!=lst.end();++beg)
        cout<<*beg<<' ';
    cout<<endl;
}
//第二个形参为int
void print_err(initializer_list<string>lst , int err_code){

}
int main()
{
    string expected="as";
    string actual="asd";
    //expected和actual是string对象
    if(expected!=actual)
        print_err({"return",actual,",",expected,"is","expected"});
    else
        print_err({"function","right"});
    
    system("pause");
    return 0;
}

