#include <iostream>
#include <vector>

using std::vector;

int main()
{
    int arr[10] = {};
    for (size_t sz = 0; sz != 10; ++sz)
    {
        arr[sz] = sz;
    }

    // Copy arr to another array
    int arr_c[10];
    for (size_t sz = 0; sz != 10; ++sz)
    {
        arr_c[sz] = arr[sz];
    }
    for (auto a: arr_c)
    {
        std::cout << a << std::endl;
    }

    // Copy by vector
    std::cout << "Copy by vector: " << std::endl;
    vector<int> arr2;
    for (int i = 0; i != 10; ++i)
    {
        arr2.push_back(i);
    }
    vector<int> arr2_c = arr2;
    for (auto a: arr2_c)
    {
        std::cout << a << std::endl;
    }
    return 0;
}