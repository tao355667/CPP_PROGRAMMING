/*
指针作为类数据成员，数组作为类数据成员,的区别
*/
#include <iostream>
#include <cstring>
typedef struct
{
    char name[20];
} stu0;
typedef struct
{
    char *name;
} stu;
void test1()
{
    printf("数组作为类数据成员:\n");
    stu0 s1 = {"asdf"}; //改了s1
    stu0 s2;
    s2 = s1;
    printf("s1=%s\n", s1.name);
    std::cout << "s2=" << s2.name << "\n";
    //
    strcpy(s2.name, "99999"); //改了s1
    printf("s1=%s\n", s1.name);
    std::cout << "s2=" << s2.name << "\n";
}
void test2()
{
    printf("指针作为类数据成员:\n");
    stu s1;
    s1.name = new char[20];
    strcpy(s1.name, "asdf"); //改了s1
    stu s2;
    s2 = s1;
    printf("s1=%s\n", s1.name);
    std::cout << "s2=" << s2.name << "\n";
    //
    strcpy(s2.name, "99999"); //改了s2
    printf("s1=%s\n", s1.name);
    std::cout << "s2=" << s2.name << "\n";
}
int main()
{
    test1(); //数组作为类数据成员
    test2(); //指针作为类数据成员
    return 0;
}
