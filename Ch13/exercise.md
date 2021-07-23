13.1

拷贝构造函数是用来拷贝对象的函数。调用时机：

- 函数调用过程中使用传值方式时调用/返回非引用类型时
- 使用一个对象初始化另一个对象时（拷贝旧对象的参数构造新对象）

13.2

拷贝构造函数的参数类型应该声明为引用类型

13.3

调用合成的拷贝构造函数，对新对象的成员进行默认初始化

13.4

- 以传值方式调用函数时将实参拷贝给形参
- 初始化`local`
- `new`一个匿名对象时
- `*heap = local`
- 列表初始化时
- 函数返回时

13-8/5

```
#include <string>

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()): ps(new std::string(s)), i(0) { }

    HasPtr(const HasPtr &hp): i(hp.i) {
        std::string *s = new std::string(*(hp.ps));
        *ps = *s;
    }

    HasPtr& operator=(const HasPtr &hp) {
        std::string *new_ps = new std::string(*(hp.ps));
        // 删除原来的ps, 释放原来ps所指的内存
        delete ps;
        *ps = *new_ps;
        i = hp.i;
        return *this;
    }

private:
    std::string *ps;
    int i;
};
```

13.9

析构函数用来释放对象占用的资源，销毁对象中的`non-static`成员变量；合成析构函数完成默认销毁对象或阻止销毁对象的工作；

