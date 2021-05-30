#include <iostream>
#include <string>
using namespace std;


istream& get_cin(istream &is)
{
    string s;
    while (is >> s)
    {
        cout << s << endl;
    }
    is.clear();
    return is;
}

int main()
{
    istream& is = get_cin(cin);
    cout << is.rdstate() << endl;
    return 0;
}