# 习题2-12
`if(x=3)`和`if(x==3)`这两条语句的差别是什么？

- 一个“=”是赋值运算符，`if(x=3)`括号中的表达式为赋值表达式，值为3，为非零值，故该语句等价为`if(1)`，无论如何都会进入if
- 两个“=”是关系运算符，若x与3相等则进入if，否则不进入