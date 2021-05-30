#include <iostream>
#include <string>
#include <sstream>
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
    // istream& is = get_cin(cin);
    // cout << is.rdstate() << endl;
    // 类型转换
    istringstream iss("world nihao!");
    get_cin(iss);
    return 0;
}