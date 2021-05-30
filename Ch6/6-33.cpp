#include <iostream>
#include <string>
#include <vector>

using namespace std;
using Iter = vector<int>::const_iterator;

void print(const vector<int> arr, size_t i = 0)
{
    cout << arr[i] << endl;
    if (i != arr.size() - 1)
        print(arr, i+1);
}

void print_v2(Iter begin, Iter end)
{
    // if (begin == end)
    //     return;
    cout << *begin << endl;
    if (begin != end - 1)
    {
        print_v2(begin+1, end);
    }
}
// Wrong
// 调用的时候会拷贝，导致arr迭代器的位置一直在变
void print(vector<int> arr, vector<int>::iterator beg)
{
    cout << *beg << endl;
    if (beg != arr.end() - 1)
        print(arr, beg+1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    print(arr, arr.begin());
    
    return 0;
}