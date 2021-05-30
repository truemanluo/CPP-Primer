#include "ch9.h"
using namespace std;
typedef deque<int> deq;

void copyElements(deq &dodd, deq &deven, list<int> &l) 
{
    for (auto it = l.cbegin(); it != l.cend(); ++it) {
        if (*it % 2) {
            dodd.push_back(*it);
        }
        else {
            deven.push_back(*it);
        }
    }
}

ostream& operator<< (ostream &os, deque<int> &d)
{
    for (auto it = d.cbegin(); it != d.cend(); ++it) {
        os << *it << endl;
    }
    return os;
}

int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6};
    deq d1, d2;
    copyElements(d1, d2, l);
    cout << "Odd: " << endl;
    cout << d1;
    cout << "Even: " << endl;
    cout << d2;
    return 0;
}