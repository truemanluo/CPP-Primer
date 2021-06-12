#ifndef CP5_ex12_1_h
#define CP5_ex12_1_h

#include "ch12.h"
class StrBlobPtr;
class StrBlob 
{
public:
    friend class StrBlobPtr;
    StrBlob() : data(std::make_shared<vector<string>>()) {}
    StrBlob(initializer_list<string> ilist): data(std::make_shared<vector<string>>(ilist)) {}

    // 声明为const表示size()不能修改其绑定的对象(this指针被声明为 const StrBlob* const)
    size_t size() const {
        return data->size();
    }
    void push_back(string s);
    void pop_back();
    string& front();
    string& back();
    bool empty() {
        return data->size() == 0;
    }
    StrBlobPtr begin();
    StrBlobPtr end();
    

/**
 * Q1: 为什么不能定义一个static的vector进行共享？
 * 
 * 
 * Q2: new的StrBlob对象为什么必须是一个指针？
**/
private:
    shared_ptr<vector<string>> data;
    void check(size_t i, const string& msg) const;
};

#endif