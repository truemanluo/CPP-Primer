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