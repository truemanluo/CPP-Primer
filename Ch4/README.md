#### 显式类型转换

- 命名的强制类型转换:
```cast-name<type>(expression)```
  - `static_cast`：只要不含底层const，都可以使用
  - `const_cast`：只能改变对象的底层const属性（去掉const）
    ```
    const char *cp;
    char *q = const_cahr<char*>(cp);
    ```
  - `reinterpret_cast`：为运算对象的位模式提供较低层次上的重新解释
  - `dynamic_cast`：[例子](../Ch19/type_cast.cpp)
    > 用于将基类的指针或引用安全地转化成派生类的指针或引用

    type必须是类类型。

    Notes: 尽量使用虚函数来实现这一功能

    