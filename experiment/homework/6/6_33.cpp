/*
函数find的功能是在N个整数中找出最小值，并将最小值移到第一个位置上（如果存在多个，则只移动第一个），其他元素保持相对位置不变。例如：输入整数8 5 2 9 2，则输出结果为：2 8 5 9 2。

请改正程序中指定位置的错误。



注意：只允许修改注释"ERROR"的下一行，不得改动程序中的其他内容，也不允许增加或删减语句。

源程序清单：

*/

#include <iostream>

using namespace std;

const int N = 5;

void find(int *a)
{

    int min = 0, temp;

    for (int i = 1; i < N; i++)

        /**********ERROR**********/
        if (a[min] > a[i])
            min = i;
        // if (a[min] < a[i])
        //     min = i;

        temp = a[min];

    int j = min;

    while (j > 0)
    {

        /**********ERROR**********/
        a[j] = a[j-1];
        //a[j] = a[j + 1];

        j--;
    }

    /**********ERROR**********/
    a[0] = temp;
    //a[0] = a[min];
}

int main()
{

    int a[N];

    for (int i = 0; i < N; i++)
        cin >> a[i];

    /**********ERROR**********/
    find(a);
    //find(a[N]);

    for (int i = 0; i < N; i++)
        cout << a[i] << ' ';

    cout << endl;

    return 0;
}
