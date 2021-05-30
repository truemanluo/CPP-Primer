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
    if (ans.empty())
    {
        cout << "Wrong!" << endl;
    }
    else if (ans.size() == 1)
    {
        cout << ans[0] << endl;
        return 0;
    }
    
    for (decltype(ans.size()) i = 1; i < ans.size(); ++i)
    {
        cout << "The sum is: " << ans[i-1] + ans[i] << endl;
    }

    // Binary sum
    decltype(ans.size()) begin = 0, end = ans.size() - 1;
    while (begin <= end)
    {
        if (begin == end)
            cout << "The binary sum is: " << ans[begin] << endl;
        else
        {
            cout << "The binary sum is: " << ans[begin] + ans[end] << endl;
        }
        ++begin;
        --end;
    }
    return 0;
}