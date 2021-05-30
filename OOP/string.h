#ifndef __MYSTRING__
#define __MYSTRING__
// #include <string.h>
#include <cstring>
#include <iostream>
class String
{
public:
    String(const char* cstr = 0);
    // 拷贝构造函数
    String(const String &str);
    // 拷贝复制函数
    String& operator=(const String& str);
    ~String();
    char* get_c_str() const
    {
        return m_data;
    }
private:
    // 用指针来存放字符串的地址，保证动态性
    char *m_data;
};

inline String::String(const char* cstr)
{
    if (cstr)
    {
        m_data = new char[strlen(cstr)+1];
        // 初始化
        strcpy(m_data, cstr);
    }
    else
    {
        m_data = new char[1];
        *m_data = '\0';
    }
    
}

inline String::String(const String& str)
{
    char *new_str = new char[strlen(str.m_data)+1];
    strcpy(m_data, new_str);
}
// 深拷贝
inline String& String::operator=(const String& str)
{
    // self assignment
    if (&str == this)
    {
        return *this;
    }
    // 释放左值的内存（清除左值）
    delete[] m_data;
    // 分配空间
    m_data = new char[strlen(str.m_data)+1];
    // 拷贝值
    strcpy(m_data, str.m_data);
    return *this;
}

inline String::~String()
{
    delete[] m_data;
}

std::ostream& operator<< (std::ostream& os, String &s)
{
    os << s.get_c_str();
    return os;
}
#endif