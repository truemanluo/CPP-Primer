#include <vector>
using std::vector;

bool search(vector<int>::iterator begin, vector<int>::iterator end, int value)
{
    for (vector<int>::iterator it = begin; it != end; ++it) {
        if (*it == value)
            return true;
    }
    return false;
}

// 9-5
vector<int>::iterator searchItem(vector<int>::iterator begin, vector<int>::iterator end, int value)
{
    for (vector<int>::iterator it = begin; it != end; ++it) {
        if (*it == value)
            return it;
    }
    return end;
}