/*
3-10 P76
汉诺塔问题，将A针上的盘移到C针上，可借助B针，
注意：盘必须保持大的在下面，小的在上面。每次只可移动一个盘
================
1  |  |
2  |  |
3  |  |
4  |  |
5  |  |
---------
A  B  C
================
分析：
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//把src针最上面一个盘子移动到的dest针上
//这个实际上就是一阶问题，显然可解的，据此可递归得到高阶问题的解
void move(char src,char dest){
    cout<<src<<"-->"<<dest<<endl;
}
//把n个盘子从src针移动到dest针，以medium针作为中介
//规定一下：头-->中-->尾
void hanoi(int n,char src,char medium,char dest){//n头-中-尾
    if(n==1)
        move(src,dest);//1头-尾
    else{
        hanoi(n-1,src,dest,medium); //n-1头->中。将n-1个碍事的移到中转站
        //第一行也是n-1阶的问题，但是从头->中
        move(src,dest);             //头->尾。碍事的没了，把最难处理的大盘直接移到目标盘
        //大盘移好后，就相当于平地了，此时只考虑n-1阶的相同问题，1阶问题是可解的
        hanoi(n-1,medium,src,dest); //n-1中->尾。最难移的大盘搞定了，还要考虑将n-1个盘子如何移到目标盘
        //最后一行是n-1阶的问题，注意n-1个盘子存在的位置，头-中
    }
}
int main()
{
    //输入盘的个数
    int m;
    cout<<"Enter the number of desks:";
    cin>>m;
    //输出解决方案
    cout<<"the steps to move "<<m<<"desks:"<<endl;
    hanoi(m,'A','B','C');

    system("pause");
    return 0;
}
