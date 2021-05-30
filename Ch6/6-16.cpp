#include <iostream>
#include <string>

using namespace std;

// 无法传入字面字符串
bool is_empty_str(const string &s)
{
    return s.empty();
}

int main()
{
    // string s = "abc";
    if (!is_empty_str("hello"))
        cout << "Not empty!" << endl;
    return 0;
}