#include <string>
using namespace std;

class HasPtr
{
public:
    HasPtr(const string &s = string()): ps(new string()), i(0) { }
    HasPtr(const HasPtr &p): ps(new string(*p.ps)), i(p.i) { }
    HasPtr& operator=(const HasPtr &);
    ~HasPtr() { 
        delete ps;
    }
private:
    int i;
    string *ps;
    
};

HasPtr& HasPtr::operator=(const HasPtr &rhs) {
    // 创建临时对象(防止自赋值时发生异常)
    auto newps = new string(*rhs.ps);

    // 删除原对象
    delete ps;

    // 将临时对象赋值给原对象
    ps = newps;
    i = rhs.i;
    return *this;

}