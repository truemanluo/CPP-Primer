#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void to_upper(string &str)
{
    for (auto &s: str)
    {
        s = toupper(s);
    }
}

int main()
{
    string text;
    vector<string> ans;
    while (getline(cin, text))
    {
        ans.push_back(text);
    }
    for (auto it = ans.begin(); it != ans.end() && !it->empty(); ++it)
    {
        to_upper(*it);
        // for (auto &s: *it)
        // {
        //     s = toupper(s);
        // }
        cout << *it << endl;
    }
        
    return 0;
}