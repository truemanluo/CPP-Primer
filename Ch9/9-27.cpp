#include "ch9.h"
using namespace std;

ostream& operator<< (ostream &os, forward_list<int> &d)
{
    for (auto it = d.cbegin(); it != d.cend(); ++it) {
        os << *it << endl;
    }
    return os;
}

int main()
{
    forward_list<int> fl = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    auto pre = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr % 2) {
            curr = fl.erase_after(pre);
        }
        else {
            pre = curr;
            ++curr;
        }
    }
    for (auto it = fl.cbegin(); it != fl.cend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}