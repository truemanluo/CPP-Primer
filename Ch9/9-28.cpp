#include "ch9.h"
using namespace std;

void searchInsert(forward_list<string> &fl, string& s1, string& s2)
{
    auto pre = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr == s1) {
            curr = fl.insert_after(curr, s2);
            break;
        }
        else {
            pre = curr;
            ++curr;
        }
    }
    if (curr == fl.end()) {
        fl.insert_after(pre, s2);
    }
}

int main()
{
    forward_list<string> fl = {"nihao", "wesden", "hello", "komi"};
    string s1 = "hell", s2 = "world"; 
    searchInsert(fl, s1, s2);
    for (auto it = fl.cbegin(); it != fl.cend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}