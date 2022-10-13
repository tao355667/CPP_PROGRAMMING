/*
习题4-19 P149
编写一个名为CPU的类，描述一个CPU的以下信息：时钟频率，最大不会超过3000MHz；
字长可以是32位或64位；核数可以是单核、双核或四核；是否支持超线程。各项信息
要求使用位域来表示。通过输出sizeof(CPU)来观察该类所占的字节数
*/
#include<iostream>

using namespace std;
//枚举
enum WordLen{_32BIT,_64BIT};    //字长
enum Core{ONE,TWO,FOUR};        //核数
enum HT{NO,YES};                //是否支持超线程

//CPU类
class CPU{
    private:
        unsigned fre:12;    //频率
        WordLen wordlen:1;  //字长
        Core core:2;        //核数
        HT ht:1;            //是否支持超线程
    public:
        //构造函数
        CPU(unsigned fre,WordLen wordlen,Core core,HT ht)
            :fre(fre),wordlen(wordlen),core(core),ht(ht){
        }
        //显示CPU的信息
        void show();
};
//显示CPU的信息
void CPU::show()
{
    cout<<"CPU类占用字节数："<<sizeof(CPU)<<endl;
    cout<<"频率："<<fre<<"MHz"<<endl;
    cout<<"字长：";
    if(wordlen==_32BIT)
        cout<<"32位"<<endl;
    if(wordlen==_64BIT)
        cout<<"64位"<<endl;
    cout<<"核数：";
    switch(core)
    {
        case ONE:cout<<"1"<<endl;break;
        case TWO:cout<<"2"<<endl;break;
        case FOUR:cout<<"4"<<endl;break;
    }
    cout<<"是否支持超线程：";
    switch(ht)
    {
        case NO:cout<<"不支持"<<endl;break;
        case YES:cout<<"支持"<<endl;break;
    }
}
int main()
{
    CPU cpu(3000,_64BIT,FOUR,YES);  //定义并初始化一个CPU类的对象cpu
    cpu.show();//显示cpu对象的信息
    getchar();//程序暂停
    return 0;
}
