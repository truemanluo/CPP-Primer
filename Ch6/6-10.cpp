#include <iostream>

using namespace std;

void exchange(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int main()
{
    int a = 3, b = 4;
    cout << a << b << endl;
    exchange(&a, &b);
    cout << a << b << endl;
    return 0;
}