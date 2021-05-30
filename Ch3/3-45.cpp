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
using int_arr = int[3];
// int_p is a pointer to an array of 3 intager elements
using int_p = int (*)[3];
int main()
{
    int ia[2][3] = {
        {8, 6, 7},
        {2, 3, 0}
    };
    // Range-for
    for (auto &i : ia)
    {
        for (auto j: i)
        {
            cout << j << endl;
        }
    }
    cout << "Common for: " << endl;
    // Common-for
    for (size_t i = 0; i != 2; ++i)
    {
        for (size_t j = 0; j != 3; ++j)
        {
            cout << ia[i][j] << endl;
        }
    }
    cout << "Pointers for: " << endl;
    // Pointers-for
    for (auto i = ia; i != ia + 2; ++i)
    {
        for (auto *j = *i; j != *i + 3; ++j)
        {
            cout << *j << endl;
        }
    }

    return 0;
}