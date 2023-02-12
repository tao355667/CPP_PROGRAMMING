/*
  9-3 P355
  Array类的声明和定义都在此文件中
 */
#ifndef ARRAY_H
#define ARRAY_H
#include <cassert>

//数组类模板定义
template <class T>
class Array
{
private:
    T *list;  // T类型指针，用于存放动态分配的数组内寸首地址
    int size; //数组大小（元素个数）

public:
    Array(int sz = 50);                       //构造函数
    Array(const Array<T> &a);                 //复制构造函数
    ~Array();                                 //析构函数
    Array<T> &operator=(const Array<T> &rhs); //重载“=”使数组对象可以整体赋值
    T &operator[](int i);                     //重载“[]”，使Array对象可以起到C++普通数组的作用
    const T &operator[](int i) const;         //"[]"运算符的const版本
    operator T *();                           //重载到T*类型的转换，使Array对象可以起到普通C++数组的作用
    operator const T *() const;               //到T*类型转换操作符的const版本
    int getSize() const;                      //取数组的大小
    void resize(int sz);                      //修改数组的大小
};
//构造函数

//析构函数

//复制构造函数

//重载“=”运算符，将对象rhs赋值给本对象。实现对象之间的整体赋值

//重载下标运算符，实现与普通数组一样通过下标访问元素，并且具有越界检查功能

//重载指针运算符，将Array类的对象名转换为T类型的指针，指向当前对象中的私有数据
//因为可以像使用普通数组首地址一样使用Array类的对象名

//取当前数组的大小
template <class T>
int Array<T>::getSize() const
{
    return size;
}
//将数组大小改为sz
template <class T>
void Array<T>::resize(int sz)
{
    assert(sz >= 0); //检查sz是否非负
    if (sz == size)  //如果指定大小与原有大小一样，什么也不做
        return;
    T *newList = new T[sz];          //申请信的数组内存
    int n = (sz < size) ? sz : size; //将sz与size中较小的一个赋值给n
    //将原有数组中前n个元素复制到新数组中
    for (int i = 0; i < n; i++)
        newList[i] = list[i];
    delete[] list;  //删除原数组
    list = newList; //使list指向新数组
    size = sz;      //更新size
}
#endif