#include "ch9.h"
using namespace std;

int main()
{
    list<string> l;
    string s;
    while (cin >> s) {
        l.push_back(s);
    }
    for (list<string>::const_iterator it = l.cbegin(); it != l.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}