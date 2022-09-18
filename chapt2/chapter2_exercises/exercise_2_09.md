# 习题2-09
在一个for语句中可以给多个变量赋初值吗？如何实现？

可以，实现如下：
```C++
for(int i=1,j=2;i+j<=3;i++,j++){//i，j只在内部生效
    cout<<i<<endl<<j<<endl;
}
for(i=1,j=2;i+j<=3;i++,j++){//需要在外声明i，j
    cout<<i<<endl<<j<<endl;
}
```