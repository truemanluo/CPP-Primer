#include <string>
using namespace std;

class HasPtr
{
public:
    HasPtr(const string &s = string()): ps(new string(s)), i(0), cnt(new size_t(1)) { }
    HasPtr(const HasPtr &p): ps(new string(*p.ps)), i(p.i), cnt(p.cnt) { ++*cnt;}
    HasPtr& operator=(const HasPtr &);
    ~HasPtr() { 
        delete ps;
    }
private:
    int i;
    string *ps;
    size_t *cnt; // 增加引用计数，实现浅拷贝
    
};

HasPtr& HasPtr::operator=(const HasPtr &rhs) {
    // 先递增rhs的引用计数（防止自赋值）
    ++*rhs.cnt;

    // 检查原对象是否是最后一个对象(防止自赋值的情况)
    if (--*cnt == 0) {
        delete ps;
        delete cnt;
    }

    ps = rhs.ps;
    i = rhs.i;
    cnt = rhs.cnt;
    return *this;

}