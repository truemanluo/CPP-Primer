#include "ch9.h"
using namespace std;

int main()
{
    forward_list<int> fl = {1, 2, 3, 4, 5};
    auto curr = fl.begin();
    auto pre = fl.before_begin();
    while (curr != fl.end()) {
        if (*curr % 2) {
            curr = fl.insert_after(pre, *curr);
            advance(curr, 2);
            advance(pre, 2);
        }
        else {
            curr = fl.erase_after(pre);
        }

    }
    for (auto it = fl.cbegin(); it != fl.cend(); ++it) {
        cout << *it << endl;
    }
    return 0;
}