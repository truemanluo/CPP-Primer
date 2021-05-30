#include <iostream>
#include <string>

using namespace std;

bool has_capital(const string &s)
{
    for (auto x : s)
    {
        if (isupper(x))
            return true;
    }
    return false;
}

void str_to_upper(string &s)
{
    for (auto &x : s)
    {
        x = toupper(x);
    }
}

string str_to_upper_v2(string s)
{
    string ans = s;
    for (auto &x : ans)
    {
        x = toupper(x);
    }
    return ans;
}


int main()
{
    string s = "abc";
    if (has_capital(s))
        cout << "Capital letter exsists!" << endl;
    else
    {
        cout << "No capital letters!" << endl;
    }
    // str_to_upper(s);
    cout << str_to_upper_v2(s) << endl;
    
    return 0;
}