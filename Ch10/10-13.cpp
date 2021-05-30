#include "../Ch9/ch9.h"
using namespace std;

bool has5(string &s)
{
    return (s.size() >= 5);
}

int main()
{
    vector<string> vec = {"hello, world!", "nihao", "hi", "good morning"};
    auto end = partition(vec.begin(), vec.end(), has5);
    for (auto it = vec.begin(); it != end; ++it) {
        cout << *it << endl;
    }
    return 0;
}