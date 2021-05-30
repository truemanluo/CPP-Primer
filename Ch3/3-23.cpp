#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<int> nums;
    for (int i = 1; i != 10; ++i)
    {
        nums.push_back(i);
    }

    for (auto it = nums.begin(); it != nums.end(); ++it)
    {
        *it = (*it) * 2;
        cout << *it << endl;
    }
    return 0;
}