#include <vector>
#include <list>
#include <iostream>
#include <array>
using namespace std;

std::ostream& operator<<(std::ostream& os, vector<int> &v)
{
    for (auto it = v.begin(); it != v.end(); ++it) {
        os << *it << std::endl;
    }
    return os;
}


int main()
{   
    list<int> l = {1, 2, 3};
    vector<int> vec(l.cbegin(), l.cend());
    cout << vec;
    array<int, 10> arr = {9};
    array<int, 10> arr2 = {8};
    arr2 = arr; // OK
    // arr2 = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8}; // ERROR
    // arr2 = {8}; // {8, 0, 0, ..., 0} BAD(not allowed)
    for (auto it = arr2.cbegin(); it != arr2.cend(); ++it) {
        cout << *it << " ";
    }
    return 0;
}