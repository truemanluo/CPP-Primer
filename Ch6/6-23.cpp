#include <iostream>
#include <string>

using namespace std;
// Bad
void print(int *p)
{
    while (*p != 3)
    {
        cout << *p << endl;
        ++p;
    }     
}

void print_v2(const int *p, size_t sz)
{
    for (size_t i = 0; i != sz; i++)
    {
        cout << *(p + i) << endl;
    }
}

void print_v3(const int *beg, const int *end)
{
    while (beg != end)
    {
        cout << *beg++ << endl;
    }
}


int main()
{
    int arr[] = {0, 1, 2, 3};
    // cout << "After" << b << endl;
    // print_v2(arr, end(arr) - begin(arr));
    print_v3(begin(arr), end(arr));
    return 0;
}