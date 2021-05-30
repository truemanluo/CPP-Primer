#include <iostream>
#include <vector>

// using std::vector;
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    // Pass by reference
    for (int &v: vec)
    {
        v = (v % 2 == 1) ? 2*v : v;
        cout << v << endl;
    }
    // Pass by value
    cout << "Pass by value" << endl;
    for (int v: vec)
    {
        cout << v << endl;
    }
    return 0;
}