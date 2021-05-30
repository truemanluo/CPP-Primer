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
    // int x = 0;
    // vector<int> ans;
    string str;
    vector<string> ans;
    while (cin >> str)
    {
        ans.push_back(str);
    }
    for (auto a: ans)
    {
        cout << a << endl;
    }
    return 0;
}