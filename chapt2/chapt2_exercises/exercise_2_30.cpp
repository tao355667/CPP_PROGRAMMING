/*
习题2-30 P63
口袋中有红、黄、白、黑5种颜色的球若干个。每次从口袋中取出3个不同颜色的球，问有多少种取法？
计算机穷举法
5个球对应编号为1~5
穷举方式：
取3轮，每轮3次
避免球相同：第一次取的第二次不能取，第三次也不能取；第二次取的第三次不能取
避免情况重复：第一轮第n次取的，第二轮第n次不能取，第三轮第n次也不能取
*/
#include<stdio.h>
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    cout<<""<<endl;
    int sum=0;
    for(int i=1;i<=5-2;i++){
        for(int j=i+1;j<=5;j++){
            for(int k=j+1;k<=5;k++){
                cout<<i<<j<<k<<endl;
                sum++;
            }
        }
    }
    cout<<"取法个数："<<sum<<endl;
    
    system("pause");
    return 0;
}
