#include "12-1.h"

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
    return StrBlobPtr();
}

StrBlobPtr StrBlob::end() {
    return StrBlobPtr();
}


int main()
{
    initializer_list<string> s = {"luo", "qiu", "hong"};
    StrBlob bl(s);
    bl.push_back("test");
    cout << "bl size:" << bl.size() << endl;

    // StrBlob bl = new StrBlob(); 为什么是错的
    const StrBlob bl2({"tianmao", "taobao"});
    // bl2.push_back("hello"); // 错误，不能修改常量对象
    cout << bl2.size() << endl;

    StrBlob bl3 = bl;
    bl3.push_back("test2");
    cout << "bl size:" << bl.size() << endl;
    return 0;
}