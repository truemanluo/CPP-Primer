#include <iostream>

using namespace std;

// n is a parameter
int foo(void)
{
    static size_t sz = 0;
    return sz++;
}

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i != 5; ++i)
        cout << foo() << endl;
    return 0;
}