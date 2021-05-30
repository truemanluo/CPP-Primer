#include <iostream>

using namespace std;

// n is a parameter
int foo(int n)
{
    // x is a local variable
    int x = 8;
    // sz is a static local variable
    static size_t sz = 0;
    ++sz;
    return x + sz + n;
}

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i != 5; ++i)
        cout << foo(n) << endl;
    return 0;
}