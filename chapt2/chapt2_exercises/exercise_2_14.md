# 习题2-14 P60
修改下面程序中的错误，改正后它的运行结果是什么？
```C++
#include<iostream>
using namespace std;
int main()
{
    /*末尾没加分号*/
    int i
    int j;
    i=10;               //给i赋值
    j=20;               //给j赋值
    /*左边双引号应为英文符号，右边缺一个双引号*/
    cout<<“i+j=<<i+j;   //输出结果
    return 0;
}
```

改正后：

```C++
#include<iostream>
using namespace std;
int main()
{
    /*末尾没加分号*/
    int i;
    int j;
    i=10;               //给i赋值
    j=20;               //给j赋值
    /*左边双引号应为英文符号，右边缺一个双引号*/
    cout<<"i+j="<<i+j;   //输出结果
    return 0;
}
```

输出结果：i+j=30