#include "ch9.h"
using namespace std;

int main()
{
    deque<string> de;
    string s;
    while (cin >> s) {
        de.push_back(s);
    }
    for (deque<string>::const_iterator it = de.cbegin(); it != de.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}