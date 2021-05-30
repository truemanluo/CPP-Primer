#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s = "Hello world!";
    // 初始化
    string s1 = s;
    string s2(s);
    string s3(10, 'a');
    cout << s << ' ' << s1 << ' ' << s2 << ' ' << s3;

    /* 操作 */
    // 1. 读写: 从第一个非空白字符开始至下一个空白字符结束
    // string new_line, new_line2;
    // cin >> new_line >> new_line2;
    // cout << new_line << new_line2 << endl;
    // 2. 读写未知数量的string对象
    // string line;
    // while (cin >> line)
    // {
    //     cout << line << endl;
    // }
    string line;
    while (getline(cin, line))
    {
        cout << line << endl;
    }
    return 0;
}