# 习题5-02 P187
什么叫做可见性？可见性的一般规则是什么？

- 标识符的有效范围就是标识符的可见性

作用域可见性的一般规则
1. 有了才能用：标识符要声明在前，引用在后
2. 一山不容二虎：在同一作用域中，不能声明同名的标识符
3. 平行宇宙：在没有互相包含关系的不同的作用域中声明的同名标识符，互不影响
4. 强龙不压地头蛇：如果在两个或多个具有包含关系的作用域中声明了同名的标识符，则外层标识符在内层不可见