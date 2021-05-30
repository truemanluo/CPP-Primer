#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str = "";
    getline(cin, str);
    for (auto &s: str)
    {
        s = 'X';
    }
    cout << "Replaced str: " << str << endl;
    return 0;
}