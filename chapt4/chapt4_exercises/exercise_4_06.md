# 习题4-06 P148
什么叫做复制构造函数？复制构造函数在何时被调用？

- 复制构造函数是一种特殊的构造函数，具有一般构造函数的所有特性，其形参是本类的对象的引用。其作用是使用一个已经存在的对象（由复制构造函数的参数指定），去初始化同类的一个新对象。

调用时机：

1. 当用类的一个对象去初始化另一个对象的时候
2. 如果函数的形参是类的对象，调用函数时，进行形参和实参结合时。
3. 如果函数的返回值是类的对象，函数执行完返回调用者时