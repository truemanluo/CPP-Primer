#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::begin;
using std::end;

int main()
{
    // const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const int ca[] = {1, 4, 7, 10};
    vector<int> v(begin(ca), end(ca));
    cout << "Copy array to vector" << endl;
    for (auto i: v)
    {
        cout << i << endl;
    }
    cout << "Copy vector to array" << endl;
    vector<int> a(10, 8);
    int a_c[10] = {0};
    // begin() and end() both return pointers
    for (int *b = begin(a_c); b != end(a_c); ++b)
    {
        *b = a[(b - begin(a_c))];
    }
    for (auto a: a_c)
    {
        cout << a << endl;
    }
    return 0;
}