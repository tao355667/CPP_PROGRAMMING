#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
class SavingsAccount{   //
    private:
        int id;
        double balance;
        double rate;
        int lastDate;
        double accumulation;
        static double total;//静态数据成员，
        //
        void record(int date,double amount);
        //
        double accumulate(int date) const{
            return accumulation+balance*(date-lastDate);
        }
    public:
        SavingsAccount(int date,int id,double rate);
        int getID()const{return id;}
        double getBalance()const{return balance;}//在常成员函中不会更改目的对象的数据成员（目的对象被视为常对象）
        double getTate()const{return rate;}
        static double getTotal(){return total;}//通过静态成员函数访问静态数据成员
        void deposit(int date,double amount);
        void withdraw(int date,double amount);
        //
        void settle(int date);
        //
        void show()const;
};


#endif