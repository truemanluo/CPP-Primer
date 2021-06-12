#include "ch12.h"
#include "StrBlob.h"
#include "StrBlobPtr.h"


int main()
{
    initializer_list<string> s = {"luo", "qiu", "hong"};
    StrBlob bl(s);
    // bl.front();
    bl.push_back("test");
    bl.begin();
    cout << "bl size:" << bl.size() << endl;

    // // StrBlob bl = new StrBlob(); 为什么是错的
    // const StrBlob bl2({"tianmao", "taobao"});
    // // bl2.push_back("hello"); // 错误，不能修改常量对象
    // cout << bl2.size() << endl;

    // StrBlob bl3 = bl;
    // bl3.push_back("test2");
    // cout << "bl size:" << bl.size() << endl;
    return 0;
}