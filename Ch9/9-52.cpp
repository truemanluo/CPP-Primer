#include "ch9.h"
using namespace std;

int main()
{
    string str = "This is (Mooophy(awesome)((((wooooooooo))))) and (ocxs) over";
    stack<char> stk;
    for (auto s : str) {
        if (s != ')') {
            stk.push(s);
        }
        else
        {
            while (stk.top() != '(') {
                stk.pop();
            }
            stk.pop();
            stk.push('#');
        }
        
    }

    string ans;
    while (!stk.empty()) {
        ans.insert(ans.begin(), stk.top());
        // cout << stk.top() << endl;
        stk.pop();
    }
    cout << ans;


    return 0;
}