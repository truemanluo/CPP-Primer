#ifndef CP5_ex12_19_h
#define CP5_ex12_19_h

#include "ch12.h"
class StrBlob; // 前向声明
class StrBlobPtr 
{
public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0) : sptr(a.data), curr(sz) {} 
    std::string& deref() const; // this是一个const指针，在最后加const表示将所指对象变为const
    StrBlobPtr& incr();
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }

private:
    weak_ptr<vector<string>> sptr;
    size_t curr;
    // 检查wptr所指对象是否存在，并且下标是否合法
    std::shared_ptr<vector<string>> check(size_t i, const string &meg) const;

};

#endif