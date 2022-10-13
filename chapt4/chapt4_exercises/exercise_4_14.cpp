/*
习题4-14 P149
定义一个Tree（树）类，有成员ages（树龄），
成员函数grow(int yers)对ages加上years，age()显示tree对象的ages值
*/
#include<iostream>

using namespace std;
//树类
class Tree{
    private:
        int ages;
    public:
        Tree(){}//默认构造函数
        Tree(int a){//构造函数
            ages=a;
        }
        void grow(int years){
            ages += years;
        }
        void age(){
            cout<<"ages: "<<ages<<endl;
        }
};

int main()
{
    Tree t(0);      //定义一个Tree类的对象t
    t.age();        //显示年龄
    t.grow(1);      //生长1岁
    t.age();        //显示年龄
    t.grow(2);      //生长2岁
    t.age();        //显示年龄

    getchar();//程序暂停
    return 0;
}
