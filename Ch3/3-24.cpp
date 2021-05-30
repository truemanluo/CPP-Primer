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
    int x = 0;
    vector<int> ans;
    while (cin >> x)
    {
        ans.push_back(x);
    }
    // Empty check
    if (ans.empty())
    {
        cout << "Wrong!" << endl;
    }
    else if (ans.size() == 1)
    {
        cout << ans[0] << endl;
        return 0;
    }
    // Adjacent sum
    for (auto it = ans.cbegin(); it != ans.cend() - 1; ++it)
    {
        cout << "The sum is: " << *it + *(it+1) << endl;
    }

    // Binary sum
    auto begin = ans.cbegin(), end = ans.cend() - 1;
    while (begin <= end)
    {
        if (begin == end)
            cout << "The binary sum is: " << *begin << endl;
        else
        {
            cout << "The binary sum is: " << *begin + *end << endl;
        }
        ++begin;
        --end;
    }
    return 0;
}