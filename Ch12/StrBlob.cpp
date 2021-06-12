#include "ch12.h"
#include "StrBlob.h"
#include "StrBlobPtr.h"

/**
 * 多个StrBlob对象共享相同的vector底层结构 
**/

void StrBlob::check(size_t i, const string& msg) const {
    if (i <= 0) {
        throw out_of_range(msg);
    }
}

void StrBlob::push_back(string s) {
    data->push_back(s);
}

void StrBlob::pop_back() {
    check(size(), "pop on empty Blob");
    data->pop_back();
}

string& StrBlob::back() {
    check(size(), "back on empty Blob");
    return data->back();
}

string& StrBlob::front() {
    check(size(), "front on empty Blob");
    return data->front();
}

// 访问StrBlob的this指针
StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end() {
    return StrBlobPtr(*this, data->size());
}