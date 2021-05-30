#include "../Ch9/ch9.h"
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << accumulate(vec.cbegin(), vec.cend(), -1);
    return 0;
}