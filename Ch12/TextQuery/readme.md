TextQuery程序中出现的问题：
- 编译时报”前向声明相关的错误“
  - 与构造函数的调用时机有关
  - 编译链接过程中对象什么时候才被定义？
  - 互相引用的对象什么时候执行初始化列表构造？


**Bug Report**
- `QueryResult.cpp`中引入包的顺序不对，应先引入`"TextQuery.h"`
  > 原因是在`QueryResult`类中使用`TextQuery`对象的成员时，`TextQuery`必须是一个complete type

- `TextQuery`中有参构造函数`TextQuery(string filename)`没有初始化`shared_ptr`