#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    string str;
    vector<string> ans;
    while (cin >> str)
    {
        // 迭代器写法
        for (auto it = str.begin(); it != str.end() && !isspace(*it); ++it)
            *it = toupper(*it);
        ans.push_back(str);
    }
    for (auto a: ans)
    {
        cout << a << endl;
    }
    return 0;
}