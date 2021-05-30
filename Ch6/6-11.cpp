#include <iostream>
#include <string>

using namespace std;

void reset(string &n)
{
    n = "Bug!";
}

int main()
{
    string s = "Sounds great!";
    reset(s);
    cout << s << endl;
    return 0;
}