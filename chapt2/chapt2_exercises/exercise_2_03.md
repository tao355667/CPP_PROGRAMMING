# 习题2-03 P60
解释每条语句的作用
```C++
//包含头文件，#inlcude被称为预处理指令，文件iostream
//中声明了该程序所需要的输入和输出操作的有关信息
#include<iostream>
//“using namespace”是针对命名空间的指令
//不加这个的话，cout前要加std::
using namespace std;
//主函数
int main()
{
    //将双引号内的字符串输出到标准输出设备
    cout<<"Hello!"<<endl;
    cout<<"Welcome to C++"<<endl;
    //退出main函数，以0作为返回值
    return 0;
}
```
