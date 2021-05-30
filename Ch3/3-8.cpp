#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str = "";
    getline(cin, str);
    decltype(str.size()) cnt = 0;
    while (cnt < str.size())
    {
        str[cnt] = 'X';
        ++cnt;
    }
    cout << "Replaced str: " << str << endl;
    return 0;
}