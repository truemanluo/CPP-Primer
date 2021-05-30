#include <iostream>
#include <string>

using namespace std;

int count_sum(initializer_list<int> arr)
{
    int sum = 0;
    for (auto beg = arr.begin(); beg != arr.end(); ++beg)
    {
        sum += *beg;
    }
    return sum;
}

int main(int argc, char **argv)
{
    // int arr[] = {1, 2, 3, 4};
    cout << count_sum({1, 2, 3, 4}) << endl;
    
    return 0;
}