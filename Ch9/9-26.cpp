#include "ch9.h"
using namespace std;

ostream& operator<< (ostream &os, deque<int> &d)
{
    for (auto it = d.cbegin(); it != d.cend(); ++it) {
        os << *it << endl;
    }
    return os;
}

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec(begin(ia), end(ia)); // initialization
    deque<int> de(begin(ia), end(ia)); // initialization
    
    // cout << vec;
    for (auto it = de.cbegin(); it != de.cend(); ++it) {
        if (*it % 2) {
            de.erase(it);
        }
    }
    cout << de;

    return 0;
}