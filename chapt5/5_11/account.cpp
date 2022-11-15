#include"account.h"
#include"cmath"
#include<iostream>
using namespace std;

double SavingsAccount::total=0;

SavingsAccount::SavingsAccount(int date,int id,double rate)
    :id(id),balance(0),rate(rate),lastDate(date),accumulation(0){
        cout<<date<<"\t#"<<id<<"is created"<<endl;
    }
