#include "ch9.h"
using namespace std;

int main()
{
    vector<int> vec;
    vec.reserve(12);
    for (size_t i = 0; i != 12; ++i) {
        vec.push_back(i);
    }
    cout << "size: " << vec.size() << "capacity: " << vec.capacity() << endl;
    vec.push_back(13);
    cout << "size after: " << vec.size() << "capacity after: " << vec.capacity() << endl;
    return 0;
}