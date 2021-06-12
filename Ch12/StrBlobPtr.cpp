#include "StrBlob.h"
#include "StrBlobPtr.h"
#include "ch12.h"

std::shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &meg) const{
    // 判断sptr是否为空
    auto wp = sptr.lock();
    if (!wp) {
        throw std::runtime_error("unbound StrBlobPtr");
    }
    // 检查i是否越界
    if (i >= wp->size()) {
        throw std::out_of_range(meg);
    }
    return wp;
}

std::string& StrBlobPtr::deref() const {
    auto wp = check(curr, "dereference past end.");
    return (*wp)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
    check(curr, "increase on empty strblob");
    ++curr;
    return *this;
}