#include "ch9.h"
using namespace std;

bool isEqual(vector<int>& a, vector<int>& b)
{
    if (a.empty() && b.empty())
        return true;
    if (a.size() != b.size()) {
        return false;
    }
    
    for (auto it_a = a.cbegin(), it_b = b.cbegin(); it_a != a.cend(); ++it_a, ++it_b) {
        if (*it_a != *it_b) {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> vec1;
    vector<int> vec2;
    cout << isEqual(vec1, vec2) << "Empty?: " << vec1.empty() << endl;
    
    return 0;
}