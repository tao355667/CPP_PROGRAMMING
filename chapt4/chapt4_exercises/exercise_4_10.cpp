/*
习题4-10 P148
设计一个用于人事管理的“人员”类。由于考虑到通用性，这里只抽象出所有类型人员都具有的属性：
编号、性别、出生日期、身份证号等。其中“出生日期”声明为一个“日期”类的内嵌子对象。
用成员函数实现对人员的录入和显示。
要求包括：构造函数和析构函数、复制构造函数、内联成员函数、带默认形参值的成员函数、类的组合。
*/
#include<iostream>
#include<cstring>
using namespace std;
//日期类
class Date{
    private:
        int year,month,day;
    public:
        Date(){}//默认构造函数
        Date(int y,int m,int d){//构造函数
            year=y;month=m;day=d;
        }
        void SetDate(int y,int m,int d){//修改i日期信息
            year=y;month=m;day=d;
        }
        void GetDate(){//输出日期信息
            cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
        }
};
//人员类
class Person{
    private:
        int num;
        char sex;
        long long ID;
        Date birthday;
    public:
        Person(){}//默认构造函数
        Person(int y,int m,int d,int n,char s='m',long I=0):birthday(y,m,d)
        {
            num=n;
            ID=I;
            sex=s;
        }
        Person(Person &p)//复制构造函数
        {
            num=p.num;
            sex=p.sex;
            birthday=p.birthday;
            ID=p.ID;
        }
        void input();//输入人员信息
        void output();//输出人员信息
        ~Person(){//析构函数
            cout<<" "<<num<<"号人员已录入"<<endl;
        }
};
//输入人员信息
void Person::input()
{
    
    cout<<"开始输入人员信息"<<endl;
    cout<<"编号:";cin>>num;
    cout<<"性别:";cin>>sex;
    cout<<"身份证号:";cin>>ID;
    cout<<"出生日期(年 月 日):";
    int y,m,d;
    cin>>y>>m>>d;
    birthday.SetDate(y,m,d);
}
//输出人员信息
void Person::output()
{
    cout<<"您要获取的人员信息"<<endl;
    cout<<"编号:"<<num<<endl;
    cout<<"性别:";
    if(sex=='m') cout<<"男"<<endl;
    else cout<<"女"<<endl;
    cout<<"身份证号:"<<ID<<endl;
    cout<<"出生日期:";birthday.GetDate();
}
int main()
{
    Person p;
    p.input();
    p.output();
    // 另一种存储身份证号的方法
    // char id[18];
    // cin>>id;
    // id[18]='\0';
    // cout<<id;
    system("pause");
    return 0;
}
