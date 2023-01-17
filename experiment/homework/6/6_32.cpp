/*
ARRAY类用于存放一个一维int型数组，计算并输出当前数组中各元素的最大值、最小值和平均值。

其成员声明已给出，请参照注释，完成ARRAY类的定义。



注意：部分源程序给出，仅允许在注释"Begin"和"End"之间填写内容，不得改动main函数和其他已有的任何内容。

试题程序：

*/

#include <iostream>

#include <fstream>

using namespace std;

const int N = 100;

class ARRAY
{

    int data[N]; // 数组data用于存储待处理的数据，N为常量

    int num; // 当前元素的个数

    int max, min; // 元素的最大值、最小值

    float average; // 元素的平均值

public:
    ARRAY(int n); // 构造函数，n为元素个数

    void input(); // 输入n个整数

    void process(); //计算data数组中的最大值、最小值和平均值

    void print()
    { // 输出当前数组中的元素及其最大值、最小值和平均值

        cout << "共有" << num << "个元素: ";

        for (int i = 0; i < num; i++)
            cout << data[i] << ' ';

        cout << endl;

        cout << "max=" << max << endl;

        cout << "min=" << min << endl;

        cout << "average=" << average << endl
             << endl;
    }
};

/*******Begin*******/
//构造函数
ARRAY::ARRAY(int n) : num(n) {}
//接收数据函数
void ARRAY::input()
{
    for (int i = 0; i < num; i++)
    {
        cin >> data[i];
    }
}
//计算最大值最小值平均值
void ARRAY::process()
{
    int sum=min=max=data[0];
    // min = data[0];
    // max = data[0];
    // int sum = data[0];
    for (int i = 1; i < num; i++)
    {
        if (data[i] < min)
            min = data[i];
        if (data[i] > max)
            max = data[i];
        sum += data[i];
    }
    average = 1.0 * sum / num;
}
/*******End*********/

int main()
{

    int n;

    cin >> n; // 输入待处理元素个数

    ARRAY arr(n);

    arr.input();

    arr.process();

    arr.print();

    return 0;
}