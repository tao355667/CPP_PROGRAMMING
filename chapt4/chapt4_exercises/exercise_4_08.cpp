/*
习题4-08 P148
定义一个DOG类，包含age、weight等属性，以及对这些属性操作的方法。
实现并测试这个类
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

#define random(a,b) (rand()%(b-a)+a)

using namespace std;

class DOG{
    private:
        int age;
        double weight;
        int die;
    public:
        //构造函数
        DOG(int age1=0,double weight1=2,int die1=0)
        {
            age=age1;weight=weight1;die=die1;
        }
        void DOGgrow();     //狗长大函数
        int isDogDie();     //狗死亡函数
        void DOGMessage();  //查看狗的信息
};
//狗长大
void DOG::DOGgrow()
{
    if(!die) //狗没死则继续长大
    {
        //狗有百分之90的概率长大，百分之10的概率死亡
        if(random(1,100)<=90/*(rand()%100)<90*/)
        {
            age++;                  //年龄增加
            if(weight<=40) weight+=2;//体重增加但有极限
        }
        else
        {
            die=1;      //10%概率死亡
        }
    }
}
//狗死亡
int DOG::isDogDie()
{
    return die;
}
//查看狗的信息
void DOG::DOGMessage()
{
    cout<<"The age of your dog is "<<age<<"."<<endl;
    cout<<"The weight of your dog is "<<weight<<"."<<endl;
    if(isDogDie())
        cout<<"Your dog is dead!"<<endl;
    else
        cout<<"Your dog is alive!"<<endl;
}
int main()
{
    srand((int)time(0));  //产生随机种子，0也可换成NULL
    //狗出生
    DOG mydog;
    cout<<"Your dog is born!"<<endl;
    mydog.DOGMessage();
    //狗长大
    while(!mydog.isDogDie())
    {
        mydog.DOGgrow();
    }
    cout<<endl;
    //狗死亡
    cout<<"Your dog has had a good time with you!"<<endl;
    mydog.DOGMessage();

    getchar();//程序暂停
    return 0;
}
