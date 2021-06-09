#include "ch12.h"


/**
 * 多个StrBlob对象共享相同的vector底层结构 
**/
class StrBlob 
{
public:
    StrBlob();
    StrBlob(initializer_list<string> ilist);

    // 声明为const表示size()不能修改其绑定的对象(this指针被声明为 const StrBlob* const)
    size_t size() const {
        return data->size();
    }
    void push_back(string s);
    void pop_back();
    string& front();
    string& back();

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

StrBlob::StrBlob(initializer_list<string> ilist): data(make_shared<vector<string>>(ilist)) {}
StrBlob::StrBlob() {}


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