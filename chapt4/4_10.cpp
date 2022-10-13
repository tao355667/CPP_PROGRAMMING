/*
4-10  P139
综合实例-个人银行账户管理程序
*/
#include<iostream>
#include<cmath>
using namespace std;

class SavingsAccount{           //储蓄账户类
    private:
        int id;                 //账号
        double balance;         //余额
        double rate;            //存款的年利率
        int lastDate;           //上次变更余额的日期
        double accumulation;    //余额按日累加之和
        //记录一笔账，date为日期，amount为金额，desc为说明
        void record(int date,double amount);
        //获得到指定日期为止的存款金额按日累积值
        double accumulate(int date)const{
            return accumulation+balance*(date-lastDate);
        }
    public:
        //构造函数
        SavingsAccount(int date,int id,double rate);
        //获取账户信息（数据是私有的，要通过外部接口访问）
        int getId(){return id;}
        double getBanlance(){return balance;}
        double getRate(){return rate;}
        //存取现金
        void deposit(int date,double amount);       //存入现金
        void withdraw(int date,double amount);      //取出现金
        //结算利息，每年1月1日调用一次该函数
        void settle(int date);
        //显示账户信息
        void show();
};
//SavingsAccount类相关函数实现
//构造函数
SavingsAccount::SavingsAccount(int date,int id,double rate):id(id),balance(0),rate(rate),lastDate(date),accumulation(0)
{
    cout<<date<<"\t#"<<id<<"is created"<<endl;
}
//计算一笔账
void SavingsAccount::record(int date,double amount)
{
    //更新余额累积值
    accumulation=accumulate(date);
    //更新日期
    lastDate=date;
    //将输入数据保留小数点后两位
    amount=floor(amount * 100 +0.5)/100;//保留小数点后两位
    //将变动量加入余额
    balance += amount;
    //输出提示信息
    cout<<date<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<endl;
}
//存入现金
void SavingsAccount::deposit(int date,double amount)
{
    record(date,amount);
}
//取出现金
void SavingsAccount::withdraw(int date,double amount)
{
    if(amount>getBanlance())
        cout<<"Error: not enough money"<<endl;
    else
        record(date,-amount);
}
//计算年利息
void SavingsAccount::settle(int date)
{
    double interest=accumulate(date)*rate/365;
    if(interest!=0)
        record(date,interest);
    accumulation=0;
}
//显示账户信息
void SavingsAccount::show()
{
    cout<<"#"<<id<<"\tBalance:"<<balance;
    cout<<endl;
}
int main()
{
    //建立2个账户
    SavingsAccount sa0(1,21325302,0.015);
    SavingsAccount sa1(1,58320212,0.015);
    //几笔账目
    sa0.deposit(5,5000);
    sa1.deposit(25,10000);
    sa0.deposit(45,5500);
    sa1.withdraw(60,4000);
    //开户第90天到了银行计息日，结算所有账户的年息
    sa0.settle(90);
    sa1.settle(90);
    //输出各个账户信息
    sa0.show();
    sa1.show();

    getchar();//程序暂停
    return 0;
}
