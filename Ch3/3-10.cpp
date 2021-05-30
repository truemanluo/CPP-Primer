#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str = "";
    getline(cin, str);
    // While-loop version
    decltype(str.size()) cnt = 0;
    string ans = "";
    while (cnt < str.size())
    {
        if (!ispunct(str[cnt]))
        {
            ans += str[cnt];
        }
        ++cnt;
    }
    cout << "Replaced str: " << ans << endl;
    return 0;
}